from django.db import models

from django.utils import timezone



# Create your models here.


class Policy(models.Model):
    POLICY_CHOICES = [
        ('Health', 'Health'),
        ('Life', 'Life'),
        ('Car', 'Car'),
        ('Home', 'Home'),
    ]
    policy_name = models.CharField(max_length=100)
    policy_type = models.CharField(choices=POLICY_CHOICES, max_length=50)
    coverage_amount = models.DecimalField(max_digits=10, decimal_places=2)
    premium = models.DecimalField(max_digits=10, decimal_places=2)
    start_date = models.DateField()
    end_date = models.DateField()

    def __str__(self):
        return f"{self.policy_name} - {self.policy_type}"
    



class User(models.Model):

    fullname = models.CharField(max_length=255)
    
    
    firstname = models.CharField(max_length=255)
    lastname = models.CharField(max_length=255)
    
    
    email = models.EmailField(unique=True)
    
    
    phone = models.CharField(max_length=15)
    
    
    password = models.CharField(max_length=255)
    
  
    date_joined = models.DateTimeField(auto_now_add=True)
    
   
    terms_accepted = models.BooleanField(default=False)

    def __str__(self):
        return self.fullname




