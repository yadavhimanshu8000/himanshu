#Write a Python program to get the Factorial number of given number.

num=int(input("Enter the number: "))

            # give fact==1
fact=1

            # used for loop from 1 to user input..
for i in range(1,num+1):

            # fact*=i...
    fact=fact*i

print("factorial: ",fact)