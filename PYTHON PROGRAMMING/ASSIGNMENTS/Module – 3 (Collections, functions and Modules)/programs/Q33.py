# write a Python program to map two lists into a dictionary. 

list_keys=[1,5,8,7,9,6]
list_values=['himanshu','jiyu','lucky','jayesh','saloni','vishal']

                                                    # using dictionary comprehension
dict_={list_keys:i for list_keys, i in zip(list_keys,list_values)}

print(f"Map two list in dict: {dict_}")