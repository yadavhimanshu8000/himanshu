# Write a Python script to concatenate following dictionaries to create a new one.

dic1={1:'hello',2:'world',3:'himanshu'}
dic2={4:'namaste',5:'india',6:'vishal'}
dic3={7:'good',8:'morning',9:'jiya'}

                        # using unpacking the key value pair in dic..
new_dict={**dic1,**dic2,**dic3}


print(f"concatenate dic: {new_dict}")

