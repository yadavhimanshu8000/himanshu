import pymysql

mydb = pymysql.connect(host="localhost", user="root", password="")

cursor = mydb.cursor()

cursor.execute("CREATE DATABASE IF NOT EXISTS APPLICATION")
mydb.commit()

mydb = pymysql.connect(host="localhost", user="root", password="", database="APPLICATION")

cursor = mydb.cursor()

cursor.execute("""
    CREATE TABLE IF NOT EXISTS banker (
        id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
        name VARCHAR(30),
        Contact INT UNIQUE,
        Email VARCHAR(50),
        Password VARCHAR(30),
        gender VARCHAR(10),
        city VARCHAR(30),
        state VARCHAR(30)
    )
""")
mydb.commit()

cursor.execute("""
    CREATE TABLE IF NOT EXISTS customer (
        id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
        name VARCHAR(30),
        Contact INT UNIQUE,
        Email VARCHAR(50),
        Password VARCHAR(30),
        gender VARCHAR(10),
        city VARCHAR(30),
        state VARCHAR(30)
    )
""")
mydb.commit()



