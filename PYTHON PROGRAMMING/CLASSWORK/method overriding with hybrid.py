class  A:
    def fun(self):
        print("jayesh hello :")

class B(A):
    def fun(self):
        super().fun()
        print("vishal hello :")

class C(A):
    def fun(self):
        super().fun()
        print("tatti...")

class D(C,B):
    def fun(self):
        super().fun()
        print("khalo...")

obj=D()
obj.fun()