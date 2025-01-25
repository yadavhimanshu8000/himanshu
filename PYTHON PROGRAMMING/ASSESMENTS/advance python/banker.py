import pymysql

class Application:
    def __init__(self):
        self.db_connection()

    def db_connection(self):
        try:
            # Connecting to the MySQL database running on localhost (XAMPP)
            self.mydb = pymysql.connect(
                host="localhost", 
                user="root",      # Default MySQL username in XAMPP is 'root'
                password="",      # Default MySQL password in XAMPP is an empty string
                database="APPLICATION"  # Your database name
            )
            self.mycursor = self.mydb.cursor()
        except Exception as e:
            print(f"Error connecting to database: {e}")
            exit(1)

    def main_menu(self):
        print("Welcome to the Banking System!")
        print("1. Banker")
        print("2. Customer")
        choice = input("Enter your choice (1/2): ")

        if choice == "1":
            self.banker_menu()
        elif choice == "2":
            self.customer_menu()
        else:
            print("Invalid choice! Exiting...")
            exit()

    def banker_menu(self):
        print("\nBanker Menu:")
        print("1. Register")
        print("2. Login")
        choice = input("Enter your choice (1/2): ")

        if choice == "1":
            self.banker_registration()
        elif choice == "2":
            self.banker_login()
        else:
            print("Invalid choice! Going back to main menu...")
            self.main_menu()

    def customer_menu(self):
        print("\nCustomer Menu:")
        print("1. Register")
        print("2. Login")
        choice = input("Enter your choice (1/2): ")

        if choice == "1":
            self.customer_registration()
        elif choice == "2":
            self.customer_login()
        else:
            print("Invalid choice! Going back to main menu...")
            self.main_menu()

    def banker_registration(self):
        print("\nBanker Registration Form")
        name = input("Enter name: ")
        contact = input("Enter contact: ")
        email = input("Enter email: ")
        password = input("Enter password: ")
        gender = input("Enter gender (Male/Female): ")
        city = input("Enter city: ")
        state = input("Enter state: ")

        sql = "INSERT INTO banker(name, contact, email, password, gender, city, state) VALUES (%s, %s, %s, %s, %s, %s, %s)"
        args = (name, contact, email, password, gender, city, state)
        try:
            self.mycursor.execute(sql, args)
            self.mydb.commit()
            print("Banker registration successful!")
        except Exception as e:
            print(f"Error: {e}")

    def customer_registration(self):
        print("\nCustomer Registration Form")
        name = input("Enter name: ")
        contact = input("Enter contact: ")
        email = input("Enter email: ")
        password = input("Enter password: ")
        gender = input("Enter gender (Male/Female): ")
        city = input("Enter city: ")
        state = input("Enter state: ")

        sql = "INSERT INTO customer(name, contact, email, password, gender, city, state) VALUES (%s, %s, %s, %s, %s, %s, %s)"
        args = (name, contact, email, password, gender, city, state)
        try:
            self.mycursor.execute(sql, args)
            self.mydb.commit()
            print("Customer registration successful!")
        except Exception as e:
            print(f"Error: {e}")

    def banker_login(self):
        contact = input("Enter contact: ")
        password = input("Enter password: ")

        sql = "SELECT * FROM banker WHERE contact = %s AND password = %s"
        self.mycursor.execute(sql, (contact, password))
        result = self.mycursor.fetchone()

        if result:
            print("Banker login successful!")
            self.banker_dashboard()
        else:
            print("Invalid credentials!")

    def customer_login(self):
        contact = input("Enter contact: ")
        password = input("Enter password: ")

        sql = "SELECT * FROM customer WHERE contact = %s AND password = %s"
        self.mycursor.execute(sql, (contact, password))
        result = self.mycursor.fetchone()

        if result:
            print("Customer login successful!")
            self.customer_dashboard()
        else:
            print("Invalid credentials!")

    def banker_dashboard(self):
        print("\nBanker Dashboard:")
        print("1. View all customers")
        print("2. Update all customers")
        print("3. Delete all customers")
        choice = input("Enter your choice (1/2/3): ")

        if choice == "1":
            self.view_all_customers()
        elif choice == "2":
            self.update_all_customers()
        elif choice == "3":
            self.delete_all_customers()
        else:
            print("Invalid choice!")

    def customer_dashboard(self):
        print("\nCustomer Dashboard:")
        print("1. Withdraw Amount")
        print("2. Deposit Amount")
        print("3. View Balance")
        choice = input("Enter your choice (1/2/3): ")

        if choice == "1":
            self.withdraw_amount()
        elif choice == "2":
            self.deposit_amount()
        elif choice == "3":
            self.view_balance()
        else:
            print("Invalid choice!")

    def view_all_customers(self):
        try:
            sql = "SELECT * FROM customer"
            self.mycursor.execute(sql)
            customers = self.mycursor.fetchall()
            for customer in customers:
                print(f"ID: {customer[0]}, Name: {customer[1]}, Contact: {customer[2]}")
        except Exception as e:
            print(f"Error: {e}")

    def update_all_customers(self):
        print("Feature under development...")

    def delete_all_customers(self):
        confirmation = input("Are you sure you want to delete all customers? (y/n): ")
        if confirmation.lower() == "y":
            try:
                sql = "DELETE FROM customer"
                self.mycursor.execute(sql)
                self.mydb.commit()
                print("All customers deleted!")
            except Exception as e:
                print(f"Error: {e}")

    def withdraw_amount(self):
        amount = float(input("Enter amount to withdraw: "))
        contact = input("Enter your contact: ")

        sql = "UPDATE customer SET balance = balance - %s WHERE contact = %s"
        try:
            self.mycursor.execute(sql, (amount, contact))
            self.mydb.commit()
            print(f"Amount of {amount} withdrawn successfully!")
        except Exception as e:
            print(f"Error: {e}")

    def deposit_amount(self):
        amount = float(input("Enter amount to deposit: "))
        contact = input("Enter your contact: ")

        sql = "UPDATE customer SET balance = balance + %s WHERE contact = %s"
        try:
            self.mycursor.execute(sql, (amount, contact))
            self.mydb.commit()
            print(f"Amount of {amount} deposited successfully!")
        except Exception as e:
            print(f"Error: {e}")

    def view_balance(self):
        contact = input("Enter your contact: ")

        sql = "SELECT balance FROM customer WHERE contact = %s"
        self.mycursor.execute(sql, (contact,))
        balance = self.mycursor.fetchone()

        if balance:
            print(f"Your balance is: {balance[0]}")
        else:
            print("Error: Could not retrieve balance.")

# Main execution
app = Application()
app.main_menu()
