# Write a Python script to merge two Python dictionaries.

dict1={1:'himanshu',2:'vishal',3:'jayesh'}
dict2={4:'jiyu',5:'saloni',6:'mahi'}  

                    # using packing method to merge...
final_dict={**dict1,**dict2}


print(f"Merge two dict: {final_dict}")