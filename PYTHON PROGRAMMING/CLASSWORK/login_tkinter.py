from tkinter import *

root = Tk()

root.geometry('500x500')
root.title("signup form!!")

name= label(root,text="name",font=("verdana",20,"bold"))
name.place(x=50,y=50)


email= label(root,text="email",font=("verdana",20,"bold"))
email.place(x=50,y=50)


mobile= label(root,text="mobile",font=("verdana",20,"bold"))
mobile.place(x=50,y=50)


password= label(root,text="password",font=("verdana",20,"bold"))
password.place(x=50,y=50)

confirm_password= label(root,text="confirm_password",font=("verdana",20,"bold"))
confirm_password.place(x=50,y=50)



root.mainloop()

