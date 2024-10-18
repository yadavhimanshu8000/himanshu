class A:

    def myclass(self):
        print("this is function1 !!")

class B(A):
    def myclass(self):
        super().myclass()
        print("this is fun2 !!")
    
obj=B()
obj.myclass()
