# # Write a Python program to check whether a list contains a sub list

def sub_string(list1,list2):

                        # find length of list..
    len_lst=len(list1)
    len_sub_lst=len(list2)

                                        # using for loop and condition..
    for i in range(len_lst - len_sub_lst + 1):
        if list1[i:i + len_sub_lst] == list2:
            return True
            
    return False

list1 = [1, 2, 3, 4, 5, 6, 7]
list2= [3, 4, 5]


print(sub_string(list1, list2))  




    