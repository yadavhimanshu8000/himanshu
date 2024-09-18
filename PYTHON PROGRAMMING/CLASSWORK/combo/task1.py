
def mycall():

    n=int(input("enter the number"))
    fac=1

    for i in range(1,n+1):
        fac=fac*i

    print(fac)



def pattern1(): 

    for i in range(1,6):
        print("*"*i)


def pattern2():
    for i in range(1,6):
        print(" "*(6-i),"*"*i)


def pattern3():
    for i in range (1,6):
        print(" "*(6-i)," *"*i)

