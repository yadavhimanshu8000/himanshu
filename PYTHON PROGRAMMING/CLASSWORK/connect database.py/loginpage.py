from tkinter import *
from tkinter import messagebox 

def login1(root):

    root.destroy()

    root= Tk()
    root.geometry('500x500')
    root.title('signup form!!')

    email= Label(root, text="email : " ,font=("calibri",20,"bold"))
    email.place(x=100,y=100)

    password= Label(root, text="password : ", font=("calibri",20,"bold"))
    password.place(x=100,y=150)

    eemail= Entry(root, bg="lightblue")
    eemail.place(x=270,y=110)

    epassword= Entry(root, bg="lightblue")
    epassword.place(x=270,y=160)

        
    sign_up =Button(root,text="Sign up",bg="darkblue",font=("calibri",20,"bold"),command=summit_enter)
    sign_up.place(x=100,y=250,height=40,width=150)


    root.mainloop()

def summit_enter():

    messagebox.showinfo("notification","login successfully")

