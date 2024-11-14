#  Write a Python program to count the number of lines in a text file. 

            # variable count_line=0.
count_line=0

                # open the file for read..
file=open("input.txt",'r')

                # using readlines for all
lines=file.readlines()

for i in lines:
                # in count_file add 1..
    count_line+=1

print(count_line)
