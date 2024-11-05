# Write a Python program to returns sum of all divisors of a number 

number = int(input("Enter a number: "))

# Initialize 0
sum_of_divisors = 0

                # Loop through all numbers from 1 to the given number
for i in range(1, number + 1):
    if number % i == 0:  # If i is a divisor of number
        sum_of_divisors += i

                                        # Output: Display the sum of divisors
print(f"The sum of divisors of {number} is: {sum_of_divisors}")