#Write a Python function that takes a list of words and returns the length  of the longest one.

            # using function with parameter and with return types...
def hello(word):
    l=0
                # using for loop and if condition...
    for i in word:
        if len(i)>l:
            l=len(i)
    
    return l

n=input("Enter list with space: ").split()

print(hello(n))
