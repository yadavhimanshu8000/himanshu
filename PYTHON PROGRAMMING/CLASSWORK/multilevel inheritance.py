d = {}
class A:

    def register(self):

        name=input("Enter Name: ")
        roll_no=int(input("Enter Roll No: "))

        d['name']= name
        d['Roll_No']= roll_no

        print('register successfully  !!')

class B(A):
    maths=90
    science=100
    english=60

    def aunthicate(self):
        name=input("Enter Name: ")
        roll=int(input("Enter Roll No: "))

        self.name=name
        self.roll_no=roll

        if d['name']==self.name and d['Roll_No'] == self.roll_no:

            print('************marks**************')
            print(f'maths: {self.maths}')
            print(f'Science: {self.science}')
            print(f'English: {self.english}')

        else:
            print('Invalid Credintials !!')

class C(B):
    def show(self):
        if d['name']==self.name  and d['Roll_No']==self.roll_no:
            print("---------------------------------------------------------")
            total=self.maths + self.english + self.science
            print(f'Total Marks: {total}')
            print(f'perentage: {total/3}')
            print("---------------------------------------------------------")
            

student=C()

menu="""

        press 1 for register
        press 2 for Exit

    """

print(menu)
choice=int(input("Enter Your Choice: "))

if choice==1:
    student.register()

    menu1= """

        press 1 for Aunthicate
        press 2 for exit

        """
    print(menu1)

    ch=int(input("Enter Your Choice: "))

    if ch == 1:
        student.aunthicate()
        student.show()

    elif ch==2:
        print("Thank You Very Much....")

    else:
        print("Invalid Choice...")

elif choice==2:
    print("Thank You Very Much...")

else:
    print("Invalid Choice")


