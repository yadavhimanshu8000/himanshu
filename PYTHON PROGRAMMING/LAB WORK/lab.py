
'''


# find common value...

h=input("Enter string: ")

d={}

for i in h:
    if i in d:
        d[i]+=1

    else:
        d[i]=1

print(d)



# pattern...

for i in range(1,6):
    for j in range(1,i+1):

        print(j,end="")
    print()



# merge dict..abs
d1={1:'a',2:'b'}
d2={1:'c',2:'d'}

dt={}

for i in d1:
    dt[i]=d1[i]+d2[i]
print(d1)
print(d2)
print(dt)
  



l=[1,2,3,4,1,2]

l1=[]

for i in range(len(l)):
    if l[i] not in l1:

        for j in range(i+1,len(l)):
            if l[i]==l[j]:
                l1.append(l[i])
                break

print(l)
print(l1)

'''


d=[1,2,3]
d1=[5,6,7]

dict={}

for i in range(len(d)):
    dict[d[i]]=d1[i]

print(dict)


















