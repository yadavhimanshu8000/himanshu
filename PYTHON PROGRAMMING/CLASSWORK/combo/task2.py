from task1 import *

while True:
    menu= """ 
    press 1 for factorial
    press 2 for right angel
    press 3 for left angel
    press 4 for triangle
    press 5 for exit

    """

    print(menu)

    ch=int(input("Enter the choice:"))

    if ch==1:
        mycall()

    elif ch==2:
        pattern1()

    elif ch==3:
        pattern2()

    elif ch==4:
        pattern3()

    elif ch==5:
        print("Thanku !!")
        break

    else:
        print("Invalid choice.")