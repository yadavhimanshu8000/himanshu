'''

try:

    n=int(input("Enter number: "))
    n1=int(input("Enter number2: "))

    print("Addtion: ", n+n1)

except ValueError as e:
    print(e)

else:
    print("try and else are excuted!!")

finally:
    print("thank you !!")


-------------------------------------------------------------------------------------------------------------------------



try:
        
    l=[1,2,3,4]
    n=int(input("Enter index no: "))

    print ("value is ",l[n])

except IndexError as e:
    print(e)

except ValueError as e:
    print(e)


------------------------------------------------------------------------------------------------------------------

try:
    n=int(input("Enter no: "))
    n1=int(input("Enter no2: "))

    print("division: ",n/n1)

except ValueError as e:
    print(e)

except ZeroDivisionError as e:
    print(e)


------------------------------------------------------------------------------------------------------------------
try:
        
    n=int(input('Enter number: '))

    for i in range(1,11):
        print(i)

except:
    print("Invalid input!! ")


    '''
try:
        
    n=int(input("Enter number1: "))
    n1=int(input("Enter number2: "))

    print("Addition: ",n/n1)

except:
    print("invalid input !!")
