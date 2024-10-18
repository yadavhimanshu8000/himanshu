class Myclass:

    def fun1(self):
        print("this is our first class !!")

    def fun2(self):
        print("hello world !!")


class Hello:

    def evenodd(self):

        n=int(input("Enter number: "))

        if n%2==0:
            print("even")

        else:
            print("odd")

    def name(self):

        n=(input("Enter name:"))
        print(n)

        
class world:

    def palindrome(self):


        n=(input("Enter string: "))

        n1=n[::-1]

        if n==n1:
            print("palindrome..")

        else:
            print("not palindrome..")

    def fact(self):

        n=int(input("Enter num: "))

        fact=1

        for i in range(1,n+1):
            fact=fact*i

        print(fact)


class hima:
    def end(self):
         print("bass bahut huaa..")

    def lucky(self):
        print("The End !!!")

class lis:
    def hh(self):

        a=[1,2,3,5,5,4,8,4,8]

        s1=set(a)
        print(a)
        print(s1)

    def jj(self):

        n=input("Enter string: ")

        n1=n[::-1]

        print(n1)







obj=Myclass()
obj1=Hello()
obj2=world()
obj3=hima()
obj4=lis()
obj.fun1()
obj.fun2()
obj1.evenodd()
obj1.name()
obj2.palindrome()
obj2.fact()
obj3.end()
obj3.lucky()
obj4.hh()
obj4.jj()


   






