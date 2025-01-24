from django.db import models

from django.utils import timezone

# Create your models here.

class User(models.Model):
    name = models.CharField(max_length=40)
    email = models.EmailField(unique=True)
    mobile = models.BigIntegerField(unique=True)
    password = models.CharField(max_length=20)
    profile = models.ImageField(default="",upload_to="profile/")
    usertype = models.CharField(max_length=20,default="customer")

    def __str__(self):
        return self.name
    
class Car(models.Model):
       transmission=(
            ("Manual","Manual"),
            ("Auto","Auto")
            
    ) 
       fuel = (
         ("Petrol","Petrol"),
         ("Diesel","Diesel"),
         ("C.N.G","C.N.G")
          

     )
       user=models.ForeignKey(User,on_delete=models.CASCADE)
       stransmission=models.CharField(max_length=30,choices=transmission)
       sfuel=models.CharField(max_length=30,choices=fuel)
       yname=models.CharField(max_length=30)
       cyear=models.IntegerField()
       cprice=models.IntegerField()
       mileage=models.IntegerField()
       desc=models.TextField()
       cimage=models.ImageField(default="",upload_to="cimage/")

       def __str__(self):
            return self.yname
            
class Cart(models.Model):
     car = models.ForeignKey(Car,on_delete=models.CASCADE)
     user = models.ForeignKey(User,on_delete=models.CASCADE)
     ttime = models.DateTimeField(default=timezone.now())
     payment = models.BooleanField(default=False)  

    