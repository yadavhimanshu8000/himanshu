#Write a Python program to get a single string from two given strings, 
                #separated by a space and swap the first two characters of each string...

n=input("Enter string1: ")
n2=input("Enter string2: ")

                    # give conditon to greater than 2..
if len(n)<2 or len(n2)<2:

    print("both string atleast two character..")

else:
                #swapping the values...
    new_n= n[:2]+ n2[2:]
    new_n2= n2[:2]+ n[2:]

print(new_n," ",new_n2)
