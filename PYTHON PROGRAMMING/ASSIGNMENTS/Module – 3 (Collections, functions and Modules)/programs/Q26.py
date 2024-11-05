# Write a Python program to convert a list of tuples into a dictionary.  

list_tuple=[(1,'vishal'),(2,'lucky'),(3,'himanshu')]

dic={}
                # loop for key and value...
for i,value in list_tuple:

    dic[i]=value

print(f'List of tuple convert in dictionary: {dic}')