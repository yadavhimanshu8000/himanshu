#Write a Python program to count occurrences of a substring in a string. 


s=input("Enter string: ")
substring=input("Enter substring: ")
            #len(substring) stored in hello
hello=len(substring)
count=0
                # for loop and if condition apply...
for i in range(len(s)):

    if s[i:i+hello]==substring:
        count+=1

print(count)
