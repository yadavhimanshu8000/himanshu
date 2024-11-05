
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




d=[1,2,3]
d1=[5,6,7]

dict={}

for i in range(len(d)):
    dict[d[i]]=d1[i]

print(dict)


for i in range(1,10):
    for k in range(1,10-i):
        print(" ",end="")
    for j in range(65,i+65):
        print(chr(j),end="")

    print()



d1={1:'a',2:'b'}
d2={1:'c',2:'d'}

dt={}

for i in d1:

    dt[i]=d1[i]+d2[i]

print(dt)


d1={1:'a',2:'b'}
d2={3:'c',4:'d'}

dist={**d1,**d2}

print(d1)
print(d2)
print(dist)
    



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



l = [1, 2, 3, 4, 1, 2]
duplicates = list(set(x for x in l if l.count(x) > 1))

print("Duplicates:", duplicates)




a=[1,2,1,2,5,4,7,3,7,8,8]

li=[]

for i in range(0,len(a)):
    if a[i] not in li:

        for j in range(i+1,len(a)):
            if a[i]==a[j]:
                li.append(a[i])

print(li)





d=[1,2,3]
d1=[5,6,7]

d2={}

for i in range(len(d)):
    
    d2[d[i]]=d1[i]

print(d2)



# Write a Python function to insert a string in the middle of a string. 

def insert_String(main_s,s):
        
        sl = 0
                # calculate the length of main string. 
        for i in main_s:
                sl += 1
                # Calculate the middle index of the main string
        middle = sl // 2


                # Insert the string at the middle index
        return main_s[:middle] + s + main_s[middle:]
        
        #main string
main_string = input("Enter the main string: ")

        # take user input to enter the string to insert
str = input("Enter the string to insert: ")
print(f"The new string is: {insert_String(main_string,str)}")

  


d=[1,2,3]
d1=[5,6,7]

dic={}

for i in range(len(d)):
    dic[d[i]]=d1[i]

print(dic)
'''
# d1={1:'a',2:'b'}
# d2={1:'c',2:'d'}

# dt={}


# for i in d1:
#     dt[i]=d1[i]+d2[i]
# print(d1)
# print(d2)
# print(dt)
  

string_= "Name:Himanshu, Age: 22, Home: Ahmedabad"

dict_string={}

                        # using of split for , in dict..
for i in string_.split(","):

                        # using split on : ...
    keys,values = i.split(":")
                            # keys = values....
    dict_string[keys]=values

print(f"String convert into dict: {dict_string}")


