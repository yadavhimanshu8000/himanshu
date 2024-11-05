# Write a Python program to find the maximum and minimum numbers 
# from the specified decimal numbers.  

numbers = input("Enter decimal numbers separated by spaces: ")

# Convert the input string into a list of floating-point numbers
numbers_list = [float(num) for num in numbers.split()]

# Find the maximum and minimum numbers
max_num = max(numbers_list)
min_num = min(numbers_list)

# Output: Display the results
print(f"The maximum number is: {max_num}")
print(f"The minimum number is: {min_num}")