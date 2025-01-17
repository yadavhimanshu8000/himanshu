from django.db import models

# Create your models here.


class User(models.Model):
    postID=models.IntegerField(default=1)
    name= models.CharField(max_length=50)
    email= models.EmailField(max_length=50)
    body= models.TextField(default="")



    def __str__(self):
        return self.name





