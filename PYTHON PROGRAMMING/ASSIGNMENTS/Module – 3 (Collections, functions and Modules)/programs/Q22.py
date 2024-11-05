#Write a Python program to replace last value of tuples in a list.

list_tuple=[(1,2,8),(5,8,9),(4,8,0)]

new_value=7         # given new value for replace

replace_list=[]     # final list variable..

                    
for i in list_tuple:
    list_sec=list(i)            # convert tuple to list..
    list_sec[-1]=new_value      # replace last value by new_value 7..
    replace_list.append(tuple(list_sec))

print(f"original list_tuple: {list_tuple}")
print()
print(f"After replace the last value of list of tuple by 7: {replace_list}")


