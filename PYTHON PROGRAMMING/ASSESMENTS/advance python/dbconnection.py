import pymysql

# Connect to the MySQL database
mydb = pymysql.connect(
    host="localhost", 
    user="root",  # Default username for XAMPP MySQL
    password="",  # Default password is empty for XAMPP
    database="APPLICATION"  # Ensure your database is created
)

mycursor = mydb.cursor()

# Create the banker table (make sure this code is inside a Python script function or logic)
try:
    sql_create_banker_table = """
    CREATE TABLE IF NOT EXISTS banker (
        id INT AUTO_INCREMENT PRIMARY KEY,
        name VARCHAR(100),
        contact VARCHAR(15) UNIQUE,
        email VARCHAR(100),
        password VARCHAR(255),
        gender VARCHAR(10),
        city VARCHAR(50),
        state VARCHAR(50)
    );
    """
    mycursor.execute(sql_create_banker_table)  # Executes the SQL statement
    mydb.commit()  # Commit the changes to the database
    print("Banker table created successfully!")
except Exception as e:
    print(f"Error: {e}")
finally:
    mycursor.close()  # Always close the cursor after the operations
    mydb.close()  # Close the connection after you're done

