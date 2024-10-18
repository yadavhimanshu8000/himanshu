class A:
    def hello(self):

        num=input("Enter num: ")

    if num%2==0:
        print("enven number. ")

    else:
        print("odd. ")

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

