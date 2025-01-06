from django.shortcuts import render,redirect
from.models import *
from django.contrib import messages
from django.db import IntegrityError
from django.contrib.auth.hashers import make_password
from django.contrib.auth import login
from myapp.models import User 
from django.conf import settings
from django.contrib.auth.models import User 




def base(request):
    return render(request,'base.html')


def register(request):
    if request.method == 'POST':
        fullname = request.POST.get('fullname')
        firstname = request.POST.get('firstname')
        lastname = request.POST.get('lastname')
        email = request.POST.get('email')
        phone = request.POST.get('phone')
        password = request.POST.get('password')
        confirm_password = request.POST.get('confirm-password')
        terms = request.POST.get('terms')

        # Check if passwords match
        if password != confirm_password:
            messages.error(request, 'Passwords do not match.')
            return render(request, 'register.html')

        # Check if terms are accepted
        if not terms:
            messages.error(request, 'You must agree to the terms and conditions.')
            return render(request, 'register.html')

        # Check for existing email
        if User.objects.filter(email=email).exists():
            messages.error(request, 'Email already exists.')
            return render(request, 'register.html')

        # Save the new user
        try:
            new_user = User(
                fullname=fullname,  # Assuming `username` is the correct field
                firstname=firstname,
                lastname=lastname,
                email=email,
                phone=phone,
                password=password,  # Hash the password
                terms_accepted=True,
            )
            new_user.save()

            messages.success(request, 'Registration successful!')
            return redirect('policy')

        except IntegrityError:
            messages.error(request, 'An error occurred. Please try again.')
            return render(request, 'register.html')

    return render(request, 'register.html')


def policy(request):

    if request.method == 'POST':
        policy_name = request.POST['policy_name']
        policy_type = request.POST['policy_type']
        coverage_amount = request.POST['coverage_amount']
        premium = request.POST['premium']
        start_date = request.POST['start_date']
        end_date = request.POST['end_date']

        # Save the data in the database
        Policy.objects.create(
            policy_name=policy_name,
            policy_type=policy_type,
            coverage_amount=coverage_amount,
            premium=premium,
            start_date=start_date,
            end_date=end_date,
        )

        messages.success(request, 'Policy submitted successfully!')
        return redirect('policy')  

    

    return render(request, 'policy.html')



def signin(request):
    if request.method == "POST":
        username = request.POST.get('username') 
        password = request.POST.get('password')
        
        if not username or not password:
           
            return render(request, 'signin.html', {'error': 'Username and password are required'})
        
        
        if username == settings.EMAIL_HOST_USER and password == settings.EMAIL_HOST_PASSWORD:
            
            user = User.objects.get_or_create(username=username)[0]  

           
            login(request, user)
            return redirect('home')  
        else:
           
            return render(request, 'signin.html', {'error': 'Invalid username or password'})
    
    return render(request, 'signin.html')

def password_reset(request):

    return render(request,'password_reset.html')




def home(request):



    
    data={}
    try:
        users=User.objects.all()
        print(users)
        data['user'] = len(users)

        policies=Policy.objects.all()
        print(policies)
        data['policies'] = len(policies)

    except Exception as e:
        print('***************',e)

    return render(request,'home.html', {'data': data})







