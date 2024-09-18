"""
def fun():
    print("hello")
    print("world")

fun()
fun()


def mycall():                       #no parametere no return....

    n=int(input("enter the number"))
    fac=1

    for i in range(1,n+1):
        fac=fac*i

    print(fac)

mycall()


def mycall(n):                      #with parametere no return type...
    fac=1

    for i in range(1,n+1):
        fac*=i
    print(fac)


n=int(input("enter the number:"))
mycall(n)


def hello(n):

    for i in range(2,n):
        if(n%2==0):
            print("even")
        else:
            print("odd")

hello(9)

def fact():

    n=int(input("enter the number:"))

    fact=1

    for i in range(1,n+1):
        fact*=i

    return (fact)

fact()


"""

