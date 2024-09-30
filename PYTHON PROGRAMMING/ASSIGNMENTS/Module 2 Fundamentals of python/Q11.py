#Write a Python program to count the number of characters (character frequency) in a string.

string=input("Enter string: ")

            # using for loop...
for i in string:
                        # using count 
    frequency= string.count(i)

    print(str(i)+":"+str(frequency), end=",")