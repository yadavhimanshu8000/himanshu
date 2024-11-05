# Write a Python function to calculate the factorial of a number (a 
# nonnegative integer)

def calculate_fact(number):
    fact=1

    for i in range(1,number+1):

        fact=fact*i         # Calculate factorial

    return fact         # return fact

number=5

fact=calculate_fact(number)

print(f"{number} Factorial number is :{fact} ")





