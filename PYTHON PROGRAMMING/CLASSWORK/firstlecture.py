"""
print("hello",end=" ")
print("welcome")



a=int(input("enter the number1:"))
b=int(input("enter the number2:"))

print("addtion:",a+b)
print("substraction:",a-b)
print("multiplication:",a*b)
print("division:",a/b)

a=int(input("enter the number1:"))
b=int(input("enter the number2:"))

temp=a
a=b
b=temp

print("after swapping A",a)
print("after swapping B",b)

a=int(input("enter the number1:"))

if a==0:
    print(f"{a} is zero")

elif a%2==0:
    print(f"{a}number is even")

else:
    print(f"{a} is odd")



a=int(input("enter the number1:"))
b=int(input("enter the number2:"))
c=int(input("enter the number3:"))

if a>b:
    if a>c:
        print("number A is greater")

    else:
        print("c is greater")

elif b>c:
    print("b is greater")

else:
    print("c is greater")

     


a=int(input("enter the number1:"))
b=int(input("enter the number2:"))
c=int(input("enter the number3:"))

if a>b and a>c:
    print("A is greater:",a)

elif b>a and b>c:
    print("B is greater:",b)

else:
    print("C is greater",c)


n=int(input("enter the number:"))
i=1
fact=1
while(i<=n):
    fact=fact*i
    i+=1
print(fact)



for i in range(1,21,1):
    print(i)



n=int(input("enter the number:"))

for i in range(1,n+1,1):
    print(i)



for i in range(1,6):
    for j in range(1,i+1):
        print("*",end="")

    print()


for i in range(1,6):
    for k in range(1,6-i):
        print(" ",end="")
    
    for j in range(1,i+1):
        print("*",end="")

    print()

"""

for i in range(1,6):
    for j in range(1,i+1):
        print("*",end="")
    print()


for i in range(1,6):
    print("*"*i)

for i in range(1,6):
    for k in range(1,6-i):
        print(" ",end="")
    
    for j in range(1,i+1):
        print("*",end="")

    print()

for i in range(1,6):
    print(" "*(6-i),"*"*i)