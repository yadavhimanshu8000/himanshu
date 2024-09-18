"""n=int(input("enter the no:"))

fact=1
for i in range (1,n+1):
    fact*=i

    print(fact)

   """ 

"""
n=int(input("enter the number"))

n1=0
n2=1

print(n1)
print(n2)

for i in range(3,n+1):
    n3=n1+n2
    print(n3)

    n1=n2
    n2=n3

    """



"""
for i in range(1,6):
    for j in range (1,i+1):
        print("*", end="")

    print()
"""

"""
for i in range(1,6):
    print("*"*i)

    """

"""
for i in range (1,6):
    for k in range (1,6-i):
        print(" ",end="")

    for j in range(1,i+1):
        print("*",end="")
    print()
    
"""
"""
for i in range(1,6):
    print(" "*(6-i),"*"*i)

    """

"""
for i in range(1,21,1):
    print(i)
"""

"""
n=int(input("enter number:"))
for i in range(1,n+1):
        print(i)
"""

"""

n=int(input("enter the number:"))
for i in range(n,0,-1):
    print(i)




for i in range(1,6):
    for j in range(1,i+1):

        print(j,end="")
    print()



n=int(input("enter the string:"))

if len(n)%2==0:
    print(n)

else:
    n1=int(len(n)/2)
    print(n[n1-1]+s[n1+s[n1+1]])

"""
s=int(input("enter the string:"))

s1=s[::-1]

if s==s1:
    print("palindrome!!")

else:
    print("not palindrome")