# Write a Python function to check whether a number is perfect or not.  

def is_perfect(n):
    if n < 1:
        return False

    divisor_sum = 1  # Start with 1

                            # Check for divisors from 2 
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            divisor_sum += i
            if i != n // i:  
                divisor_sum += n // i

    return divisor_sum == n

# Example usage:
number = 6
if is_perfect(number):
    print(f"{number} is a perfect number.")
else:
    print(f"{number} is not a perfect number.")
