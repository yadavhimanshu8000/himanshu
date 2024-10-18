'''

d1={'a':100, 'b':200, 'c':300}
d2={'a':300, 'b':200, 'c':400}

d3={}

for i ,value in d1.items():
    d3[i]=value

for i,value in d2.items():
    if i in d1:
        d3[i]+=value

    else:
        d3[i]=value

print(d3)






simple={'1':['a','b'], '2': ['c','d']}

for first in simple['1']:
    for second in simple['2']:
        print(first + second, end=" ")

print()



k=65
for i in range(6):
    for j in range(i+1):
        print(chr(k),end="")
        k+=1

    print()

'''
for i in range(1,10):
    #for k in range(1,10-i):
        #print(" ",end="")
    for j in range(65,i+65):
        print(chr(j),end="")

    print()

