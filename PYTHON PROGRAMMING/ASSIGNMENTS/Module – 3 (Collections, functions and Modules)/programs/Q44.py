# Write a Python program to read a random line from a file.


import random

file = open("himanshu.txt", 'r')

lines = file.readlines()

    # Check if the list is not empty
if lines:

    # Choose a random line from the list
    random_line = random.choice(lines)
    print("Random line : ", random_line)  # Print the line without trailing newline

else:
    print("The file is empty.")