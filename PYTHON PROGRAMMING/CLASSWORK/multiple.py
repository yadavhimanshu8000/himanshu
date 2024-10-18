class A:
     def fac(self):

        num=int(input("Enter Number: "))
        fact=1

        for i in range(1,num+1):

            fact=fact*i

        print(fact)

class B:

    def even(self):

        num=int(input("Enter Number: "))

        if num%2==0:
            print(f"{num} Even Number...")

        else:
            print(f'{num} Odd Number...')


class C(A,B):

    def pattern(self):
        print("....pattern....")
        for i in range(1,6):
            for j in range(1,i+1):
                print('*',end="")

            print()


obj=C()
obj.fac()
obj.even()
print("--------------------")
obj.pattern()
print("--------------------")

        
    