# Write a Python function to reverses a string if its length is a multiple of 4.  

def reverse(s):
    
        ls = 0 
            # count length of string.
        for i in s:
            ls += 1
                # Check if the length of the string is a multiple of 4
        if ls % 4 == 0:
            # Reverse the string
                return s[::-1]
        else:
                # If length is not multiply by 4, keep the string as it is
                return "length of String is not a multiple of 4."

str = input("Enter a string: ")
    # Print the rs
print(reverse(str))