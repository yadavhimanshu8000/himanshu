'''
while True:
    a=int(input("Enter num1: "))
    b=int(input("Enter num2: "))
    c=int(input("Enter num3: "))

    if a>b:
        if a>c:
            print(f"A is greater {a}.")
        
        else:
            print(f"C is greater {c}.")

    elif b>c:
        print(f"B is greater {b}.")

    else:
        print(f"C is greater {c}.")


'''

'''
while True:
    a=int(input("Enter num1: "))
    b=int(input("Enter num2: "))
    c=int(input("Enter num3: "))

    if a>b and a>c:
        print(f"A is greater {a}.")

    elif b>a and b>c:
        print(f"B is greater {b}.")

    else:
        print(f"C is greater {c}.")



n=int(input("Enter num: "))

fact=1
i=1

while(i<=n):
    fact=fact*i

    i+=1

print(fact)



for i in range(1,6):
    for j in range(1,i+1):
        print("*",end=" ")

    print()

for i in range(1,6):
    for j in range(1,6-i):
        print(" ",end="xxxxxx")
    
    for k in range(1,i+1):
        print("*",end="")
    
    print()

for i in range(1,6):
    for j in range(1,6-i):
        print(" ",end="")

    for k in range(1,i+1):
        print("*",end=" ")

    print()


x,y,z=1,2,"python"

print(x,y,z)


    


a=int(input("Enter num1: "))
b=int(input("Enter num2: "))

a,b=b,a

print(f"A is: {a} \nB is: {b}")




a,b,r=6,10,12

b,r,a=a+1,b+2,r+3

print(a,b,r)


 


a=20e3
b=12E4
c=-87.7e100

print(type(a))
print(type(b))
print(type(c))


print("this automotion \n college")

print("this automotion \t college")





list=[1,2,1,2,22,5,[10,20]]

#list.extend([100,200,300])
#list.insert(2,"himanshu")
#list.pop(1)

print(list)




tuple=(1,2,3,5,4,5,2)


print(tuple)




for i in range(1,6):
    print(" "*(6-i)," *"*i)

   



t=(1,2,3,2.5,'himanshu','lucky',True,1,1)

#print(type(t))
#print(t.count(1))
l=list(t)
print(l)

l.extend([100,200,300])
print(l)

t1=tuple(l)
print(t1)

 '''

d={1:'himanshu',2:'lucky',3:'jayesh'}

#print(d.get(3))
#print(d.items())
#print(d.keys())
#print(d.popitem())
#print(d.pop(2))
#d.update({4:'mahi',5:'singh'})
#print(d)

t=(1,2,3,4,5,6,)
dl={}

print(dl.fromkeys(t,20))


 # pattern

# for i in range(6):
#     for k in range(1,(6-i)):
#         print(" ",end="")
#     for j in range(i+1):
#         print("* ",end="")

#     print()

# for i in range(5,0,-1):
#     for k in range(6-i):
#         print(" ",end="")
#     for j in range(i):
#         print("* ",end="")

#     print()






    