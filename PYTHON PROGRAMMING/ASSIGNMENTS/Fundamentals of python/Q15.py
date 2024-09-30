'''
Write a Python program to add 'ing' at the end of a given string (length 
should be at least 3). If the given string already ends with 'ing' then add 
'ly' instead if the string length of the given string is less than 3, leave it 
unchanged.
'''

n=input("Enter string: ")

            # using if condition ...
if len(n)>=3:
    if n.endswith('ing'):

        n1=n+'ly'
    
    else:
        n1=n+'ing'

        # print same to same user input.. 
else:
    n1=n

print(n1)


