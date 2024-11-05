
class Myclass:
    def myfun1(self):

        n=input("Enter name: ")
        n1=n[::-1]

        if n==n1:
            print("palindrome!!")

        else:
            print("not palindrome !!")

    def fun1(self):
        print(" this if function !!")

    def fun2(self):
        print("this second funtion !!")

obj= Myclass()
obj.myfun1()
obj.fun1()
obj.fun2()

