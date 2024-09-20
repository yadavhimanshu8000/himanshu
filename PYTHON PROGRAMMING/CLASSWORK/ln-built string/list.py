"""
l=[20,22.5,200,500,3,3,"lucky","himanshu",True,"hello"]

l.append(100)
print(l)

#l.clear()
print(l)

l1=l.copy()
print(l1)

print(l.count(3))

l.extend([300,200,"vishal"])
print(l)

print(l.index(2))
l.index(2,"nishit")
print(l)

l.pop(2)
print(l)



l1=[3,52,10,55,78,20]
l1.sort()
print(l1[::-1])

"""

l=[]
ev=[]
od=[]

for i in range(1,31):
    l.append(i)
    if i%2==0:
        ev.append(i)
    else:
        od.append(i)

print(l)
print(ev)
print(od)


n=int(input("enter the length of list:"))
l=[]

for i in range(1,n+1):
    n1=int(input("enter the element:"))

    l.append(n1)

print(l)

for i in range(0,len(l)):
    for j in range(i+1,len(l)):
        if l[i]>l[j]:
            temp=l[i]
            l[i]=l[j]
            l[j]=temp

l2=[]
for i in range(0,len(l)):
    print(l[i])
    l2.append(l[i])

print(l2)

print("smallest:",l2[0])
print("largest:",l[-1])
print("second largest:",l[-2])
        
