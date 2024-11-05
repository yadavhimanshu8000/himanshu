'''
Write a Python function that takes a list and returns a new list with unique 
elements of the first list.
'''

list1=[1,5,2,8,7,4,3,2,6,1,22]

                # create a new list..
new_list=[]

new_list=set(list1)

print("original_list: ",list1)
print("unique_list: ",list(new_list))