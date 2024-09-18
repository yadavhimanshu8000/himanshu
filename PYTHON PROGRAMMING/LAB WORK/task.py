for i in range(1,6):
    for k in range(1,6-i):
        print(" ",end="")
    for j in range(1,i+1):
        print("*",end="")

    print()


for i in range(1,6):
    print("*"*i)

for i in range (1,6):
    print(" "*(6-i),"1"*i)



n=int(input("enter the number:"))

for i in range(n,0,-1):
    print(i)


for i in range(1,6):
    for j in range(1,i+1):

        print(j,end="")
    print()


n=int(input("enter the number:"))
fact=1
for i in range(2,n+1):
    
    fact*=i
print(fact)

num=int(input("enter the no:"))
for i in range(2,num):                  
    if(num%i) == 0:                                     
        print( num," is not prime number")
        break
else:
    print(num," is prime number")





