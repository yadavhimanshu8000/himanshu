# Write a Python program to check multiple keys exists in a dictionary  

dict_check={'himanshu':1,'vishal':2,'lucky':3,'shatru':4}

exists_key='vishal','lucky','himanshu','shatru'

def check_multiple(dict_check,exists_key):

                        # using for loop for check exists.
    for i in exists_key:
                            # exists or not in dic..
        if i not in dict_check:
            return False        #Return False if any key is missing

    return True                 #Return true if all keys exists..

if check_multiple(dict_check,exists_key):
    print('All keys are exists in dic.')

else:
    print("some keys are not exists in dic.")
