# Write a Python program to combine two dictionary adding values for 
# common keys.  
# d1 = {'a': 100, 'b': 200, 'c':300} o d2 = {'a': 300, 'b': 200,’d’:400}  
# Sample output: Counter ({'a': 400, 'b': 400,’d’: 400, 'c': 300}).  

d1 = {'a': 100, 'b': 200, 'c':300} 
d2 = {'a': 300, 'b': 200,'d':400} 

adding_values={}

                    # using loop for d1.iteam
for i,value in d1.items():
    adding_values[i]=value          # adding key values

for i,value in d2.items():              
    if i in adding_values:              
        adding_values[i]+=value             # existing key add values
    else:
        adding_values[i]=value


print(adding_values)
