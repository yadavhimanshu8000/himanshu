class user:
    def __init__(self,a,b):
        print("constructor called !!")
        self.a=a
        self.b=b

    def __str__(self):
        return f"{self.a,self.b}"

    def __sub__(self,obj):
        x= self.a-obj.a
        y=self.b-obj.b
        return(x,y)


obj=user(10,20)
print(obj)

obj1=user(30,50)
print(obj1)

print("addition: ",obj-obj1)


