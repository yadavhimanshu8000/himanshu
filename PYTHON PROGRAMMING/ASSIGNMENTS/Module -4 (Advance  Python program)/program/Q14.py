# Write a Python class named Circle constructed by a radius and two 
# methods which will compute the area and the perimeter of a circle  


import math                 # import math method for pi... 

class circle:
    def __init__(self,radius):
        self.radius=radius

    def area(self):
                            # using formulas the area of the circle
        return math.pi*(self.radius**2)

    def perimeter(self):
                            # the perimeter circumference of the circle
        return 2 * math.pi * self.radius

                    # user input..
radius_input=float(input("Enter the circle of radius: "))

                        # create object..
obj =circle(radius_input)

print(f"area of circle: {obj.area()}")

print(f"perimeter of circle: {obj.perimeter()}")
