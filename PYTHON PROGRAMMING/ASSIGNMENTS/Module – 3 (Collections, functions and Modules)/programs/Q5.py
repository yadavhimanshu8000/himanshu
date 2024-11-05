#write a Python program to check a list is empty or not. 

check=[]
check2=[1,2,3]

            #using function ....

def check_List(list):
    if not list:
        print("list is empty")
    else:
        print("list is not empty")


                # calling..
check_List(check)
check_List(check2)