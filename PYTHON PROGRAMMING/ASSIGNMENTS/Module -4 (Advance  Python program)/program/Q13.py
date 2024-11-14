# Write a Python class named Rectangle constructed by a length and 
# width and a method which will compute the area of a rectangle 

class rectangle:
            # Constructor for length and width of rectangle
    def __init__(self, length, width):
        self.length=length
        self.width=width

    def area(self):
                            # method of area of rectangle..
        print(f"Area of a Rectangle : {self.width * self.length}")                                                  

    
len=int(input("Enter length: "))
wid=int(input("Enter width: "))

hello=rectangle(len,wid)

