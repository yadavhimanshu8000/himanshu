# Write a Python program to read first n lines of a file. 

                                    # input..
n= int(input("Enter how many lines you want: "))

                        # open file for read...
file=open("input.txt",'r')

for i in range(n):
                        # using readline for line by line print..
    print(file.readline())
file.close()
    


