# Write a Python program to find the repeated items of a tuple. 

from collections import Counter

tuple_rep=(1,2,5,8,7,4,12,5,8,5,2)

 # Count the occurrences of each item in the tuple
item_count= Counter(tuple_rep)

# empty dictionary...
repeated_item={}

# Loop through the counted items
for i, count in item_count.items():
    if count>1:
        repeated_item[i]=count

 
print(f"Original tuple: {tuple_rep}")
print()
print(f"repeated items: {repeated_item}")


