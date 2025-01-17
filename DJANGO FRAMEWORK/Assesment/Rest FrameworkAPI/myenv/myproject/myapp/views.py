from django.shortcuts import render
from rest_framework import generics
from .models import *
from . serializers import Userserializers


# Create your views here.

class Userlist(generics.ListCreateAPIView):
    queryset= User.objects.all()
    serializer_class = Userserializers 


class Userupdate(generics.RetrieveUpdateDestroyAPIView):
    queryset= User
    serializer_class= Userserializers





