# Write a Python program to read a file line by line store it into a variable.

            # declare the variable...
line_by_line= ""

                # open the file...
file=open("input.txt",'r')

                    # using readlines for read the lines
lines=file.readlines()

for i in lines:
    line_by_line+=i

print(line_by_line)



