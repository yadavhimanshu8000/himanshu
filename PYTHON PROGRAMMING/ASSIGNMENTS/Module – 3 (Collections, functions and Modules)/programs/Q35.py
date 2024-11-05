# write a Python program to print all unique values in a dictionary.

dict_={'a':1,'b':5,'c':5,'d':6,'e':7,'f':7,'g':5}

unique_value=[]
                    # for check values
for i in dict_.values():
                        # if values are not in new list
    if i not in unique_value:
        unique_value.append(i)

print(f"print all unique values: {unique_value}")

