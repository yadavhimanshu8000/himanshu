# Write a Python program to remove an empty tuple(s) from a list of tuples. 

clean_list=[(),(1,2),(4,5),(),(6,7)]

cleaned_list=[]

# Loop through each tuple in the original list
for i in clean_list:
            # check tuple is not empty..
     if i:
                # add in new list..
        cleaned_list.append(i)

print(f"original list: {clean_list}")
print()
print(f"After cleaned list: {cleaned_list}")