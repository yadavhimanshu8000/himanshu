# Write a Python script to print a dictionary where the keys are numbers between 1 and 15.  
import random

dict_number={} 

                #loop for key 1 to 15..
for i in range(1,16):
                        #  dictionary with keys from 1 to 15 and random values...
    dict_number[i]=random.randint(1,1000)
    
print("Here we print 1 to 15 numbers in dict: ")
print()

print(dict_number)