'''
Write a Python program to find the first appearance of the substring 
'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the 
whole 'not'...'poor' substring with 'good'. Return the resulting string. 

'''


n=input("Enter string: ")

            # using find method ....
s=n.find('not')
s1=n.find('poor')

                # if condition apply...
if s<s1:
    result=n[:s]+'good'+n[s1+4:]

else:
    result=n

print(result)
