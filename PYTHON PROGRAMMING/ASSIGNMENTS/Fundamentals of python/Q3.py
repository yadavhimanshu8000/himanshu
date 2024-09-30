#Write a Python program to get the Fibonacci series of given range. 

num=int(input("Enter the number: "))

    #print t1 and t2...
t1=0
t2=1

    # print t1 and t2...
print(t1)
print(t2)

    #used for loop...
for i in range(3,num+1):

            # addition t1 and t2 in nextterm
    nextterm=t1+t2
    print(nextterm)

            # swapping the value...
    t1=t2
    t2=nextterm