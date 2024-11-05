
# Write a Python program to count the number of strings where the string 
# length is 2 or more and the first and last character are same from a given 
# list of strings.


# def count(string_list):

#     count = 0
#                     # using loop for s in string..
#     for i in string_list:
#                         # using condition greater than 2 and equal first and second index..
#         if len(i) >= 2 and i[0] == i[-1]:
#             count += 1
#     return count

# # Example usage:
# strings = ["b", "xyz", "aa", "b", "cdc", "12321", "ab", "a"]
# result = count(strings)
# print(f"Number of matching strings: {result}")

str=input("Enter string: ")

print(len(str))