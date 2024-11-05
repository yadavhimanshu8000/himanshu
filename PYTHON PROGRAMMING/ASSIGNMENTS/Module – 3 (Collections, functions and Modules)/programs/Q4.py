 #Write a Python program to remove duplicates from a list.

original_list=[1,2,3,5,8,2,4,5,5]

print("Original list:", original_list)


# Initialize a list to store unique items
unique_list = []

# Iterate through the original list
for item in original_list:
    if item not in unique_list:
        unique_list.append(item)  # Add item to the unique list

# Display the result
print("List after removing duplicates:", unique_list)

