# Write a Python program to calculate surface volume and area of a cylinder.  

radius = float(input("Enter the radius of the cylinder: "))
height = float(input("Enter the height of the cylinder: "))

# Approximation of pi
pi = 3.14159

# Calculate the surface area
surface_area = 2 * pi * radius**2 + 2 * pi * radius * height

# Calculate the volume
volume = pi * radius**2 * height

# Output: Display the results
print(f"The surface area of the cylinder is: {surface_area:.2f} square units.")
print(f"The volume of the cylinder is: {volume:.2f} cubic units.")