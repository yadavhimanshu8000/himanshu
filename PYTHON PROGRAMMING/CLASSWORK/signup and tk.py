from tkinter import *
from tkinter import messagebox
import pymysql

def insert():
    name=ename.get()
    email=eemail.get()
    mobile=emobile.get()
    password=epassword.get()
    confirm_password=cpassword.get()

    if password==confirm_password:
        mydata=pymysql.connect(host="localhost",user="root",password="",database="dataform07")
        mycursor=mydata.cursor()

        sql="insert into d_mart (name ,email, mobile, password) values ('%s','%s','%s','%s')"
        args= (name,email,mobile,password)
        mycursor.execute(sql%args)
        mydata.commit()

        print("Data Inserted successfully....!!")
        messagebox.showinfo("success", "Data Inserted successfully !!")

        mycursor.close()
        mydata.close()

    else:
        print("Both Password are not same....!!")
        messagebox.showwarning("Password Error", "Both Passwords are not the same....!!")
        return

root = Tk()

root.geometry('1000x1000')
root.title("signup form!!")

root.config(bg="lightblue")

def on_enter(event):
    submit.config(bg='green')  # Color when hover

def on_leave(event):
    submit.config(bg='lightgreen') 

name= Label(root,text="name: ",font=("verdana",20,"bold"))
name.place(x=60,y=50)


email= Label(root,text="email: ",font=("verdana",20,"bold"))
email.place(x=60,y=100)


mobile= Label(root,text="mobile: ",font=("verdana",20,"bold"))
mobile.place(x=60,y=150)


password= Label(root,text="password: ",font=("verdana",20,"bold"))
password.place(x=60,y=200)

confirm_password= Label(root,text="confirm_password: ",font=("verdana",20,"bold"))
confirm_password.place(x=60,y=250)

submit=Button(root,text="submit",bg="lightgreen",font=("calibri",20,"bold"), command=insert)
submit.place(x=50,y=500,height=40,width=300)

ename=Entry(root,bg="lightgreen",font=("calibri",20,"bold"))
ename.place(x=400,y=50,height=40,width=300)

eemail=Entry(root,bg="lightgreen",font=("calibri",20,"bold"))
eemail.place(x=400,y=100,height=40,width=300)

emobile=Entry(root,bg="lightgreen",font=("calibri",20,"bold"))
emobile.place(x=400,y=150,height=40,width=300)

epassword=Entry(root,bg="lightgreen",font=("calibri",20,"bold"))
epassword.place(x=400,y=200,height=40,width=300)

cpassword=Entry(root,bg="lightgreen",font=("calibri",20,"bold"))
cpassword.place(x=400,y=250,height=40,width=300)



root.mainloop()
