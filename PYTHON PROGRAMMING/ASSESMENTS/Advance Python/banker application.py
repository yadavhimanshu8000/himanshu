from tkinter import *
from tkinter import messagebox
import pymysql

class Application:
    # The Application class is the core of this Tkinter application
    def __init__(self, root):

        self.root = root
        self.root.geometry("340x340")
        self.root.title("Banker Application")
        self.root.config(background="lightblue")

        # Creating two buttons: one for Banker and one for Customer

        self.banker_btn = Button(self.root, text="Banker", bg="orange", fg="black", font=("Arial", 12), width=15, command=self.banker)
        self.banker_btn.place(x=100, y=100)

        

        self.customer_btn = Button(self.root, text="Customer", bg="orange", fg="black", font=("Arial", 12), width=15, command=self.customer)
        self.customer_btn.place(x=100, y=150)

    def banker(self):
         #When Customer button is clicked
        self.create_user_interface("Banker", self.banker_registration, self.banker_login)

    def customer(self):
         #When Customer button is clicked
        self.create_user_interface("Customer", self.customer_registration, self.customer_login)

    def create_user_interface(self, title, register_callback, login_callback):
        self.root.destroy()
        user_root = Tk()
        user_root.geometry("380x480")
        user_root.title(title)
        user_root.config(background="lightgreen")

        register_btn = Button(user_root, text="Register", width=20, bg="green", fg="black", font=("Arial", 12), command=register_callback)
        register_btn.place(x=100, y=100)

        login_btn = Button(user_root, text="Login", width=20, bg="green", fg="black", font=("Arial", 12), command=login_callback)
        login_btn.place(x=100, y=150)

        user_root.mainloop()

    def banker_registration(self):
        # Method to show registration form for a banker
        self.registration_form("Banker", "banker")

    def customer_registration(self):
        # Method to show registration form for a Customer
        self.registration_form("Customer", "customer")

    def registration_form(self, title, user_type):
        self.root = Tk()
        self.root.title(f"{title} Registration Form")
        self.root.geometry("500x500")
        self.root.config(background="lightgray")

        Label(self.root, text="Please enter details below", font=("Arial", 12), bg="orange", fg="white").pack(fill="x")

        # Fields
        self.create_label_and_entry("Name *", 50)
        self.create_label_and_entry("Contact *", 100)
        self.create_label_and_entry("Email *", 150)
        self.create_label_and_entry("Password *", 200, is_password=True)

        Label(self.root, text="Gender *", font=("Arial", 12), bg="lightgray").place(x=20, y=250)
        self.gender_var = StringVar(value="Male")
        Radiobutton(self.root, text="Male", value="Male", variable=self.gender_var, bg="lightgray").place(x=120, y=250)
        Radiobutton(self.root, text="Female", value="Female", variable=self.gender_var, bg="lightgray").place(x=200, y=250)

        self.create_dropdown("City *", ["Ahmedabad", "Surat", "Rajkot", "Vadodara"], 300)
        self.create_dropdown("State *", ["Gujarat", "Rajasthan", "Maharastra", "Delhi"], 350)

         # Register Button
        Button(self.root, text="Register", bg="orange", fg="black", font=("Arial", 12), command=lambda: self.register(user_type)).place(x=180, y=420, width=100)

        self.root.mainloop()

    def create_label_and_entry(self, text, y, is_password=False):
         # This method creates label
        Label(self.root, text=text, font=("Arial", 12), bg="lightgray").place(x=20, y=y)
        entry = Entry(self.root, bg="lightgray", show="*" if is_password else None)
        entry.place(x=120, y=y, height=25, width=200)
        setattr(self, f"E_{text.split()[0].lower()}", entry)

    def create_dropdown(self, label_text, options, y):
        #This method creates dropdown
        Label(self.root, text=label_text, font=("Arial", 12), bg="lightgray").place(x=20, y=y)
        dropdown_var = StringVar(value=f"Select {label_text.split()[0]}")
        OptionMenu(self.root, dropdown_var, *options).place(x=120, y=y, width=200)
        setattr(self, f"{label_text.split()[0].lower()}_var", dropdown_var)

    def register(self, user_type):
        #this method inserts the registration data into the database
        sql = f"INSERT INTO {user_type}(name, contact, email, password, gender, city, state) VALUES ('%s', '%s', '%s', '%s', '%s', '%s', '%s')"
        args = (
            self.E_name.get(),
            self.E_contact.get(),
            self.E_email.get(),
            self.E_password.get(),
            self.gender_var.get(),
            self.city_var.get(),
            self.state_var.get()
        )
        try:
            mycursor.execute(sql % args)
            mydb.commit()
            messagebox.showinfo("Registration", f"{user_type.capitalize()} Registration Successfully!!!")
        except Exception as e:
                    # exception handling...
            messagebox.showerror("Error", str(e))

    def banker_login(self):
         # banker login
        self.login_form("Banker", "banker")

    def customer_login(self):
        # customer login
        self.login_form("Customer", "customer")

    def login_form(self, title, user_type):
        self.root = Tk()
        self.root.title(f"{title} Login Form")
        self.root.geometry("380x400")
        self.root.config(background="lightgray")

        self.create_label_and_entry("Contact *", 100)
        self.create_label_and_entry("Password *", 150, is_password=True)

        Button(self.root, text="Login", bg="orange", fg="black", font=("Arial", 12), command=lambda: self.login(user_type)).place(x=140, y=200, width=100)

        self.root.mainloop()

    def login(self, user_type):
        # login page of user 
        sql = f"SELECT * FROM {user_type} WHERE contact = '%s' AND password = '%s'"
        args = (self.E_contact.get(), self.E_password.get())
        try:
            mycursor.execute(sql % args)
            result = mycursor.fetchone()
            if result:
                messagebox.showinfo("Login", f"{user_type.capitalize()} Login Successfully!!!")
                if user_type == "banker":
                    self.banker_dashboard()
                else:
                    self.customer_dashboard()
            else:
                messagebox.showerror("Login", "Invalid Credentials")
        except Exception as e:
            messagebox.showerror("Error", str(e))

    def banker_dashboard(self):
        # Banker and Customer dashboard method
        self.root = Tk()
        self.root.title("Banker Dashboard")
        self.root.geometry("400x400")
        self.root.config(background="lightgray")

        Button(self.root, text="Update All Customers", bg="orange", fg="black", font=("Arial", 12), command=self.update_all_customers).pack(pady=10)
        Button(self.root, text="View All Customers", bg="orange", fg="black", font=("Arial", 12), command=self.view_all_customers).pack(pady=10)
        Button(self.root, text="Delete All Customers", bg="orange", fg="black", font=("Arial", 12), command=self.delete_all_customers).pack(pady=10)

        self.root.mainloop()

    def customer_dashboard(self):
        # Banker and Customer dashboard method
        self.root = Tk()
        self.root.title("Customer Dashboard")
        self.root.geometry("400x400")
        self.root.config(background="lightgray")

        Button(self.root, text="Withdraw Amount", bg="orange", fg="black", font=("Arial", 12), command=self.withdraw_amount).pack(pady=10)
        Button(self.root, text="Deposit Amount", bg="orange", fg="black", font=("Arial", 12), command=self.deposit_amount).pack(pady=10)
        Button(self.root, text="View Balance", bg="orange", fg="black", font=("Arial", 12), command=self.view_balance).pack(pady=10)

        self.root.mainloop()

    def update_all_customers(self):
        # updated all customer
        self.root = Tk()
        self.root.title("Update All Customers")
        self.root.geometry("400x400")
        self.root.config(background="lightgray")

        Label(self.root, text="Update All Customers", font=("Arial", 16), bg="lightgray").pack(pady=20)

        Button(self.root, text="Back", bg="orange", fg="black", font=("Arial", 12), command=self.banker).pack(pady=10)
        self.root.mainloop()

    def view_all_customers(self):
        # view all customer
        self.root = Tk()
        self.root.title("View All Customers")
        self.root.geometry("600x400")
        self.root.config(background="lightgray")

        Label(self.root, text="All Customers", font=("Arial", 16), bg="lightgray").pack(pady=10)

        try:
            sql = "SELECT * FROM customer"
            mycursor.execute(sql)
            customers = mycursor.fetchall()
            for customer in customers:
                Label(self.root, text=f"ID: {customer[0]}, Name: {customer[1]}, Contact: {customer[2]}", bg="lightgray").pack()
        except Exception as e:
            messagebox.showerror("Error", str(e))

        Button(self.root, text="Back", bg="orange", fg="black", font=("Arial", 12), command=self.banker).pack(pady=10)
        self.root.mainloop()

    def delete_all_customers(self):
        # delete all customer
        if messagebox.askyesno("Confirmation", "Are you sure you want to delete all customers?"):
            try:
                sql = "DELETE FROM customer"
                mycursor.execute(sql)
                mydb.commit()
                messagebox.showinfo("Success", "All customers have been deleted.")
            except Exception as e:
                messagebox.showerror("Error", str(e))

    def withdraw_amount(self):
        # withdraw amount 
        self.root = Tk()
        self.root.title("Withdraw Amount")
        self.root.geometry("400x300")
        self.root.config(background="lightgray")

        Label(self.root, text="Withdraw Amount", font=("Arial", 16), bg="lightgray").pack(pady=20)

        Label(self.root, text="Enter Amount", bg="lightgray").pack(pady=10)
        amount_entry = Entry(self.root)
        amount_entry.pack()

        def process_withdrawal():
            # here use exception handling..
            try:
                amount = int(amount_entry.get())
                sql = "UPDATE customer SET balance = balance - %s WHERE contact = '%s'"
                mycursor.execute(sql % (amount, self.E_contact.get()))
                mydb.commit()
                messagebox.showinfo("Success", f"Amount withdrawn: {amount}")
            except Exception as e:
                messagebox.showerror("Error", str(e))

        Button(self.root, text="Withdraw", bg="orange", fg="black", font=("Arial", 12), command=process_withdrawal).pack(pady=10)
        self.root.mainloop()

    def deposit_amount(self):
        # deposit amount of user
        self.root = Tk()
        self.root.title("Deposit Amount")
        self.root.geometry("400x300")
        self.root.config(background="lightgray")

        Label(self.root, text="Deposit Amount", font=("Arial", 16), bg="lightgray").pack(pady=20)

        Label(self.root, text="Enter Amount", bg="lightgray").pack(pady=10)
        amount_entry = Entry(self.root)
        amount_entry.pack()

        def process_deposit():
            try:
                amount = int(amount_entry.get())
                sql = "UPDATE customer SET balance = balance + %s WHERE contact = '%s'"
                mycursor.execute(sql % (amount, self.E_contact.get()))
                mydb.commit()
                messagebox.showinfo("Success", f"Amount deposited: {amount}")
            except Exception as e:
                messagebox.showerror("Error", str(e))

        Button(self.root, text="Deposit", bg="orange", fg="black", font=("Arial", 12), command=process_deposit).pack(pady=10)
        self.root.mainloop()

    def view_balance(self):
        # view the  balance 
        self.root = Tk()
        self.root.title("View Balance")
        self.root.geometry("400x300")
        self.root.config(background="lightgray")

        Label(self.root, text="Your Balance", font=("Arial", 16), bg="lightgray").pack(pady=20)

        try:
            sql = "SELECT balance FROM customer WHERE contact = '%s'"
            mycursor.execute(sql % self.E_contact.get())
            balance = mycursor.fetchone()
            if balance:
                Label(self.root, text=f"Balance: {balance[0]}", font=("Arial", 14), bg="lightgray").pack(pady=10)
            else:
                messagebox.showinfo("Info", "No balance found.")
        except Exception as e:
            messagebox.showerror("Error", str(e))

        Button(self.root, text="Back", bg="orange", fg="black", font=("Arial", 12), command=self.customer).pack(pady=10)
        self.root.mainloop()

# Database Connection
try:
    mydb = pymysql.connect(host="localhost", user="root", password="", database="APPLICATION")
    mycursor = mydb.cursor()
except Exception as e:
    messagebox.showerror("Database Connection", str(e))

# Main
root = Tk()
app = Application(root)
root.mainloop()
