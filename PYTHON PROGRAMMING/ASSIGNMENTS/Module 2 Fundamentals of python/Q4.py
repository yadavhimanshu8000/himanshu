# Write python program that swap two number with temp variable and without temp variable.

num1=int(input("Enter the number1: "))

num2=int(input("Enter the number2: "))


        # using temp variable...
temp=num1
num1=num2
num2=temp

print("num1: ",num1)
print("num2: ", num2)





                                         #   (without using temp....)


a=int(input("Enter the number1: "))

b=int(input("Enter the number2: "))

            #without using temp variable...
a,b = b,a

print("A: ",a)
print("B: ",a)



