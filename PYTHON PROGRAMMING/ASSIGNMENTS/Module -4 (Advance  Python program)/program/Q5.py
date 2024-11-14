#  Write a Python program to read a file line by line and store it into a list.

list2=[]
                    # open the file...
file= open("input.txt",'r')

                    # using readlines for list..
list1=file.readlines()

for i in list1:
                        # remove |n with strip...
    list2.append(i.strip())

print(list2)