from django.shortcuts import render,redirect

from .models import *

import random
import requests

# Create your views here.

def index(request):
    user = User.objects.get(email=request.session['email'])
    car = Car.objects.all()
    return render(request,'index.html',{'car':car})

def about(request):
    return render(request,'about.html')

def pricing(request):
    return render(request,'pricing.html')

def contact(request):
    return render(request,'contact.html')

def services(request):
    return render(request,'services.html')

def car(request):
    return render(request,'car.html')

def signup(request):
    if request.method=="POST":
        try:
            user = User.objects.get(email=request.POST['email'])
            msg = "Account is already Registered"
            return render(request,'signup.html',{'msg':msg})
        except:
            if request.POST['password']==request.POST['cpassword']:
                User.objects.create(
                    email = request.POST['email'],
                    name = request.POST['name'],
                    mobile = request.POST['mobile'],
                    password = request.POST['password'],
                    profile = request.FILES['profile'],
                    usertype = request.POST['usertype']
            )
                msg = "Signup Succesfully"   

                return render(request,'login.html',{'msg':msg})
            else:
                msg = "Invalid Credentials"
                return render(request,'signup.html',{'msg':msg})
            
    else:
         return render(request,'signup.html')
    
def login(request):
    if request.method=="POST":
        try:
            user = User.objects.get(email=request.POST['email'])

            if user.password==request.POST['password']:
                request.session['email']=user.email
                request.session['profile']=user.profile.url
                if user.usertype=="customer":
                 return redirect('index')
                else:
                    return redirect('bindex')
            
            else :
                msg = "Invalid credentials!!"
                return render(request,'login.html',{'msg':msg})
            
        except:
            msg = "Email is not registered"
            return render(request,'login.html',{'msg':msg})    
             
    else:
        return render(request,'login.html')   

def logout(request):
    del request.session['email']
    del request.session['profile']
    return redirect('login')  

def cpass(request):
    user = User.objects.get(email=request.session['email'])
    if request.method=="POST":

        try:
            
            if user.password==request.POST['opassword']:
                if request.POST['npassword']==request.POST['cnpassword']:
                   user.password = request.POST['npassword']
                   user.save()
                   return redirect('logout')
                
                else:
                   msg = "New Password and Confirm New Password are not same" 
                   if user.usertype=="customer":   

                    return render(request,'cpass.html',{'msg':msg})
                   else:
                       return render(request,'bpass.html',{'msg':msg})
                
            else:
                msg = "Incorrect Password" 
                if user.usertype=="customer":
                 return render(request,'cpass.html',{'msg':msg}) 
                else:
                    return render(request,'bpass.html',{'msg':msg})

        except:
            pass      
            
    else:
        if user.usertype=="customer":
         return render(request,'cpass.html') 
        else:
            return render(request,'bpass.html')

def fpass(request): 
    if request.method=="POST":
       try:
        user = User.objects.get(mobile=request.POST['umobile'])
        mobile = request.POST['umobile']
        otp = random.randint(1001,9999)


        url = "https://www.fast2sms.com/dev/bulkV2"

        querystring = {"authorization":"KqzoV1vs6CkURYc0IfuHWGglrXew52B7nF3POTtb4yjEdx8LQiVr8WSCxP0UMQRo4biHhmdtplOqsBXn","sender_id":"DLT_SENDER_ID","message":"YOUR_MESSAGE_ID","variables_values":str(otp),"route":"otp","numbers":mobile}

        headers = {
            'cache-control': "no-cache"
        }

        response = requests.request("GET", url, headers=headers, params=querystring)
        request.session['mobile']= user.mobile
        request.session['otp']=otp

        return render(request,'otp.html')

       except Exception as e:
           print(e)
           msg = "Mobile number is not registered"
           return render(request,'fpass.html',{'msg':msg})

    else:
         return render(request,'fpass.html')
    
def otp(request):
    otp = request.session['otp']
    uotp = request.session['uotp']

    try:
        if otp==uotp:
            del request.session['otp']
            return render(request,'npass.html')
            
        
        else:
            msg = "Invalid OTP"
            return render(request,'otp.html',{'msg':msg})


    except:
           
     return render(request,'otp.html')  

def npass(request):
    user = User.objects.get(mobile=request.session['mobile'])
    
    if request.method=='POST':
        try: 
         if request.POST['npassword']==request.POST['cnpassword']:
                user.password = request.POST['npassword']
                user.save()
                del request.session['mobile']
                   
                
         else:
                   msg = "New Password and Confirm New Password are not same"
                   return render(request,'npass.html',{'msg':msg})

        except:
         pass

    else: 
        return render(request,'npass.html',{'msg':msg}) 
    
def uprofile(request):
    user = User.objects.get(email=request.session['email'])
    if request.method=="POST":
        user.name= request.POST['name']
        user.mobile= request.POST['mobile']

        try:
            user.profile=request.FILES['profile']

            user.save()
            request.session['profile']= user.profile.url

            if user.usertype=="customer":
              return redirect('index') 
            else:
              return redirect('bindex')
        except:
            pass
       
        

    else:    
      if user.usertype=="customer":

        return render(request,'uprofile.html',{'user':user}) 
      else:
          return render(request,'buprofile.html',{'user':user})
          
      
    
def bindex(request):
    return render(request,'bindex.html')

def addcar(request):
    if request.method=="POST":
      
      try:
          user = User.objects.get(email=request.session['email'])
          Car.objects.create(
              user = user,
              stransmission = request.POST['stransmission'],
              sfuel = request.POST['sfuel'],
              yname=request.POST['yname'],
              cyear=request.POST['cyear'],
              cprice=request.POST['cprice'],
              mileage=request.POST['mileage'],
              desc=request.POST['desc'],
              cimage=request.FILES['cprofile']



          )
          msg="Car Added Successfully!!"
          return redirect('viewcar')
      except Exception as e:
          print(e)

    return render(request,'addcar.html')  


def viewcar(request):
    user=User.objects.get(email=request.session['email'])
    car= Car.objects.filter(user=user)
    return render(request, "viewcar.html",{'car':car})

def editcar(request,pk):
     user=User.objects.get(email=request.session['email'])
     car= Car.objects.get(pk=pk)
    
     if request.method == "POST":
         car.stransmission = request.POST['stransmission']
         car.sfuel = request.POST['sfuel']
         car.yname = request.POST['yname']
         car.cyear = request.POST['cyear']
         car.cprice = request.POST['cprice']
         car.mileage = request.POST['mileage']
         car.desc = request.POST['desc']

         try:
             car.cimage=request.FILES['cprofile']
             car.save()

         except:
             pass
         car.save()

         return redirect('viewcar')


     else:
            
         return render(request,'editcar.html',{'car':car})
     
def deletecar(request,pk):
    user = User.objects.get(email=request.session['email'])
    car = Car.objects.get(pk=pk)
    car.delete()
    return redirect('viewcar')  

def car_details(request,pk):
    user = User.objects.get(email=request.session['email'])
    car = Car.objects.get(pk=pk)
    return render (request,'car_details.html',{'car':car})  

def addcart(request,pk):
     user = User.objects.get(email=request.session['email'])
     car = Car.objects.get(pk=pk)

     try:
         Cart.objects.create(
             user = user,
             car = car
         )
    
         return redirect('cart')
      
     except:
         return redirect('index')
         
 

def cart(request):
    user = User.objects.get(email=request.session['email'])
    cart = Cart.objects.filter(user=user)

    return render(request,'cart.html',{'cart':cart})





         





        
                        