#Write a Python program to sum of three given integers. However, if two values are equal sum will be zero. 

num1=int(input("Enter the number1: "))

num2=int(input("Enter the number2: "))

num3=int(input("Enter the number3: "))

                                # used if condition for compare number.. 
if num1==num2 or num1==num3 or num2==num3:
    print("zero.")

                                # else used for sum of three number...
else:
    sum=num1+num2+num3
    print("sum of three number: ",sum)
