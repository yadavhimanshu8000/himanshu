# Write a Python function that checks whether a passed string is 
# palindrome or not

def palindrome_or_not(num):
                                                    # convert in lowercase and remove non alpha
    find_palindrome=''.join(i.lower() for i in num if i.isalnum())

                                        #string is the same as its reverse
    return find_palindrome==find_palindrome[::-1]


input_string="this is boy a yob si siht"

if palindrome_or_not(input_string):

    print(f'"{input_string}" is a palindrome.')

else:
    print(f'"{input_string}" is not a palindrome.')

