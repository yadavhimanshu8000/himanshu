'''
Write a Python program to generate and print a list of first and last 5 
elements where the values are square of numbers between 1 and 30. 
'''
                        # i squrae by 2 and stored in square..
square=[i**2 for i in range(1,31)]

print("square_list: ",square)

            #stored last_five ...
first_five=square[:5]

            #stored last_five ...
last_five=square[-5:]

print("first_five",first_five)

print("last_five",last_five)