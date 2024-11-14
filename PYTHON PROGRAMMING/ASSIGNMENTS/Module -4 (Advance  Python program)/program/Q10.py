# Write a Python program to write a list to a file. 


                                    # create list ..
list=['vishal','lucky','jayesh','himanshu']

                        # open txt file to write..
file=open('writein.txt','w')

                # loop on list item..
for i in list:
                # write in 'writein.txt'...
    file.write(i+'\n')

print("list is add in 'writein.txt'")

file.close()