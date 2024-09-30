# Write a python program to sum of the first n positive integers.

num=int(input("Enter the positive integers: "))

            # used if condition num<1....
if num<1:
    print("Enter positive integers...")


            # used else condition for 1*2*3*4*5=15...
else:
    sum=num* (num + 1) // 2
    print("sum of positive interger: ",sum)



