class A():

    def fun(self):
        print("this is a parent class:")

class B(A):

    def fun1(self):
        print("this is child class:")

obj=B()
obj.fun()
obj.fun1()

