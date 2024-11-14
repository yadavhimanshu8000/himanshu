#  Write a Python program to read last n lines of a file. 

                                        # user can enter the number how much line you want from end
n=int(input("Enter how much line you want from end: "))

                    # open the file for read
file=open("input.txt",'r')

                    # using readlines for all..
lines=file.readlines()

                # reverse the lines variable..
last_line=lines[-n:]

for i in last_line:
    print(i,end="")



