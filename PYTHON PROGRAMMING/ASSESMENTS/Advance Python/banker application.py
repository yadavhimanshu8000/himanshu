from tkinter import *
from tkinter import messagebox 
from databaseapplication import *
import pymysql

class application:
    def __init__(self,root):
        self.root=root
        self.root.geometry("340x340")
        self.root.title("banker application")
        self.root.config(background="lightblue")

        self.banker=Button(self.root,text="Banker",bg="orange", fg="black", font=("Arial", 12),width=15,command=self.banker)
        self.banker.place(x=100,y=100)
        self.customer=Button(self.root,text="Customer",bg="orange", fg="black", font=("Arial", 12), width=15,command=self.customer)
        self.customer.place(x=100,y=150)

        

    def banker(self):
        self.root.destroy()
        self.bankerroot = Tk()
        self.bankerroot.geometry("380x480")
        self.bankerroot.title("Banker")
        self.bankerroot.config(background="lightgreen")
        

        self.banker=Button(self.bankerroot,text="Register",width=20,bg="green", fg="black", font=("Arial", 12) ,command=self.bankerregistration)
        self.banker.place(x=100,y=100)
        self.banker=Button(self.bankerroot,text="Login", width=20,bg="green", fg="black", font=("Arial", 12),command=self.bankerlogin)
        self.banker.place(x=100,y=150)
        self.banker=Button(self.bankerroot,text="Update all Customers", width=20,bg="green", fg="black", font=("Arial", 12))
        self.banker.place(x=100,y=200)
        self.banker=Button(self.bankerroot,text="View all Customers", width=20,bg="green", fg="black", font=("Arial", 12))
        self.banker.place(x=100,y=250)
        self.banker=Button(self.bankerroot,text="Delete all Customers", width=20,bg="green", fg="black", font=("Arial", 12))
        self.banker.place(x=100,y=300)
        
        self.bankerroot.mainloop()


    def customer(self):
        self.root.destroy()
        self.customerroot= Tk()
        self.customerroot.geometry("380x480")
        self.customerroot.title("Customer")
        self.customerroot.config(background="lightgreen")

        self.customer=Button(self.customerroot,text=" Register",width=20,bg="green", fg="black", font=("Arial", 12),command=self.customer)
        self.customer.place(x=100,y=100)
        self.customer=Button(self.customerroot,text="Login", width=20,bg="green", fg="black", font=("Arial", 12))
        self.customer.place(x=100,y=150)
        self.customer=Button(self.customerroot,text=" Withdraw Amount",width=20,bg="green", fg="black", font=("Arial", 12))
        self.customer.place(x=100,y=200)
        self.customer=Button(self.customerroot,text="Deposit Amount", width=20,bg="green", fg="black", font=("Arial", 12))
        self.customer.place(x=100,y=250)
        self.customer=Button(self.customerroot,text="View Balance", width=20,bg="green", fg="black", font=("Arial", 12))
        self.customer.place(x=100,y=300)

        self.customerroot.mainloop()


    
    def bankerregistration(self):
        self.bankerroot.destroy()
        self.root = Tk()
        self.root.title("Registration Form")
        self.root.geometry("500x500")
        self.root.config(background="lightgray")

    
        heading = Label(self.root,text="Please enter details below",font=("Arial",12),bg="orange",fg="white").pack(fill="x")

    

        # Name field
        name = Label(self.root,text="Name * ",font=("Arial",12),bg="lightgray")
        name.place(x=20,y=50)
        self.E_name = Entry(self.root,bg="lightgray")
        self.E_name.place(x=120,y=50,height=25,width=200)

        # Contact field
        contact = Label(self.root,text="Contact * ",font=("Arial",12),bg="lightgray")
        contact.place(x=20,y=100)
        self.E_contact = Entry(self.root,bg="lightgray")
        self.E_contact.place(x=120,y=100,height=25,width=200)

        # Email field
        email = Label(self.root,text="Email * ",font=("Arial",12),bg="lightgray")
        email.place(x=20,y=150)
        self.E_email = Entry(self.root,bg="lightgray")
        self.E_email.place(x=120,y=150,height=25,width=200)

        Password = Label(self.root,text="Password * ",font=("Arial",12),bg="lightgray")
        Password.place(x=20,y=200)
        self.E_Password = Entry(self.root,bg="lightgray")
        self.E_Password.place(x=120,y=200,height=25,width=200)

        # Gender field
        gender = Label(self.root, text="Gender * ", font=("Arial", 12), bg="lightgray")
        gender.place(x=20, y=250)
        self.male_var = StringVar(value="Male")  # Default to Male or Female
        male_radio = Radiobutton(self.root, text="Male", value="Male", variable=self.male_var, bg="lightgray")
        male_radio.place(x=120, y=250)
        female_radio = Radiobutton(self.root, text="Female", value="Female", variable=self.male_var, bg="lightgray")
        female_radio.place(x=200, y=250)

        # City field
        city = Label(self.root, text="City * ", font=("Arial", 12), bg="lightgray")
        city.place(x=20, y=300)
        self.city_var = StringVar(value="Select City")
        city_menu = OptionMenu(self.root, self.city_var, "Ahmedabad", "Surat", "Rajkot", "Vadodara")
        city_menu.place(x=120, y=300, width=200)

        # state field
        state_label = Label(self.root, text="State * ", font=("Arial", 12), bg="lightgray")
        state_label.place(x=20, y=350)
        self.state_var = StringVar(value="Select State")
        state_menu = OptionMenu(self.root, self.state_var, "Gujarat", "Rajasthan", "Maharastra", "Delhi")
        state_menu.place(x=120, y=350, width=200)

        # Register button
        register_button = Button(self.root, text="Register", bg="orange", fg="black", font=("Arial", 12), command=self.bregister)
        register_button.place(x=180, y=420, width=100)


    def bankerlogin(self):

        self.root = Tk()
        self.root.title("Registration Form")
        self.root.geometry("380x400")
        self.root.config(background="lightgray")
        
        Number = Label(self.root,text="Number * ",font=("Arial",12),bg="lightgray")
        Number.place(x=20,y=100)
        E_Number = Entry(self.root,bg="lightgray")
        E_Number.place(x=120,y=100,height=25,width=200)

        Password = Label(self.root,text="Password * ",font=("Arial",12),bg="lightgray")
        Password.place(x=20,y=150)
        E_Password = Entry(self.root,bg="lightgray")
        E_Password.place(x=120,y=150,height=25,width=200)

        Login_button = Button(self.root, text="Login", bg="orange", fg="black", font=("Arial", 12))
        Login_button.place(x=140, y=200, width=100)

    def bregister(self):
        
        sql = "insert into banker(name,contact,email,password,gender,city,state) VALUES('%s','%s','%s','%s','%s','%s','%s')"
        args =(self.E_name.get(), self.E_contact.get(), self.E_email.get(), self.E_Password.get(), self.male_var.get(), self.city_var.get(), self.state_var.get())         
        mycursor.execute(sql % args)
        mydb.commit()
        
        messagebox.showinfo("Registration","Banker Registration Successfully!!!")
        

        




root = Tk()
obj = application(root)
root.mainloop()






   

