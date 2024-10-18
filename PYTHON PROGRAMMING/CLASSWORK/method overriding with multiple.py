class  A:
    def fun(self):
        print("jayesh hello :")

class B:
    def fun(self):
        super().fun()
        print("vishal hello :")

class C(B,A):
    def fun(self):
        super().fun()
        print("tatti...")

obj=C()
obj.fun()