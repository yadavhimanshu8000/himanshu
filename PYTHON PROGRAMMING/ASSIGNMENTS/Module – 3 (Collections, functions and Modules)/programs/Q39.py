# Write a Python program to create a dictionary from a string. 
# Sample string: 'w3resource' 
 
# Expected output:  
# {'3': 1,’s’: 1, 'r': 2, 'u': 1, 'w': 1, 'c': 1, 'e': 2, 'o': 1}   

string_="himanshu"

create_dict={}

                # iterrate throuth all elements...
for i in string_:
                    # char already in string_ increment values...
    if i in create_dict:
                        # increment by 1..
        create_dict[i]+=1

    else:
        create_dict[i]=1

print(f" String count in dict: {create_dict}")

