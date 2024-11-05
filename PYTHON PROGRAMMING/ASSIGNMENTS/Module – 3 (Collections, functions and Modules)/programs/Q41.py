# Write a Python function to check whether a number is in a given range.

def given_range(start, num, end):

                    # check num is greater than equal to start and less than equal to end.
    return start< num < end

start=1
num=98
end=99

if given_range(start,num,end):

    print(f"{num} is given in range [{start},{end}]")

else:
    print(f"{num} is not given in range [{start},{end}]")