# Write a Python program that will return true if the two given integer.. 
# values are equal or their sum or difference is 5.

num1=int(input("Enter the number1: "))

num2=int(input("Enter the number2: "))

                        # used if condition and or operator...
if num1==num2 or num1 + num2 == 5 or num1 - num2 ==5:
    print("True")

else:
    print("False")