'''
list1=[1,2,3,5,4,8]

hello=list1[:-1]        # Create a new list without the last item

print("original list:  ",list1)
print()
print("remove last object: ",hello)
'''


def count_matching_strings(string_list):
    count = 0
    for s in string_list:
        if len(s) >= 2 and s[0] == s[-1]:
            count += 1
    return count

# Example usage:
strings = ["b", "xyz", "aa", "b", "cdc", "12321", "ab", "a"]
result = count_matching_strings(strings)
print(f"Number of matching strings: {result}")