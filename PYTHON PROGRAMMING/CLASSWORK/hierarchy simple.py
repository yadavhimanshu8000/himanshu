class A:
    def hello(self):
        num=int(input("Enter num: "))

        if num%2==0:
            print(f"{num} even number. ")

        else:
            print(f"{num} odd number. ")

class B(A):
    def hii(self):
        print('Hybrid..')

class C(A):
     def pattern(self):

        for i in range(1,6):
            for j in range(1,i+1):
                print(j,end="")

            print()

obj=B()
obj.hello()
obj.hii()

obj1=C()
obj1.pattern()




