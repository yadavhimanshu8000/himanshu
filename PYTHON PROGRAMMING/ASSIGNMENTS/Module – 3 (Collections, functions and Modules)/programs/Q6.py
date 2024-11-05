'''
Write a Python function that takes two lists and returns true if they have 
at least one common member. 
'''

                        #using function for two list...
def two_list(list1,list2):

                    #loop on list1...
    for i in list1:
        if i in list2:
                            # return True...
            return True

    return False

first=[1,5,6,8,9,1]
second=[2,7,11,5,6,7]

                                        # stored in final_result..
final_result=two_list(first,second)

print("Do the lists have at least one common member:", final_result)





