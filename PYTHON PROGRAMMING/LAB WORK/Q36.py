# Write a Python program to create and display all combinations of letters, 
# selecting each letter from a different key in a dictionary.  
# Sample data: {'1': ['a','b'], '2': ['c','d']}  

# Expected Output:  
# ac ad bc bd  
            #  it allow Cartesian products for dict
import itertools

dict_list={'1': ['a','b'], '2': ['c','d']}  

                    # stored values
values_1=dict_list.values()

                                # multiple the values with use of itertools..
final_1=itertools.product(*values_1)

print("Print combination of values: ")
for i in final_1:
                        # using of join menthod..
    print(''.join(i))
