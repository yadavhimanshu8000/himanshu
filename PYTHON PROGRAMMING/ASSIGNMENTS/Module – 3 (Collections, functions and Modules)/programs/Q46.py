# Write a Python program to calculate the area of a trapezoid.  

b1 = float(input("Enter the length of the first base (b1): "))
b2 = float(input("Enter the length of the second base (b2): "))
h = float(input("Enter the height (h): "))

# Calculate the area of the trapezoid
area = 0.5 * (b1 + b2) * h

# Output: Display the result
print(f"The area of the trapezoid is: {area} square units.")