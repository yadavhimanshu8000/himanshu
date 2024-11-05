#Write a Python program to find the second smallest number in a list. 

list=[5,8,1,7,4,6,3,5]

result=None

result2=None

            # using loop anf if condition
for i in list:

    if result == None or i < result:
        result2 = result
        result = i
                                    #check result between result2
    elif result2 == None or result < i < result2:
        result2=i

print(f"Second Smallest Number : {result2}")










