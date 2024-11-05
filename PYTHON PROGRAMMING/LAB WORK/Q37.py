# write a Python program to find the highest 3 values in a dictionary. 

dict_1={'a':1,'b':5,'c':8,'d':9,'s':2,'e':10}

                # get the values.. from dict..
sort_value=dict_1.values()

                        # sorted the values...
highest_value=sorted(sort_value,reverse=True)[:3]

print(f"Print highest values in dict: {highest_value}")