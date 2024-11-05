import pymysql 

mydata= pymysql.connect(host="localhost",user="root",password="")
mycursor=mydata.cursor()

mycursor.execute("create database if not exists dataform07")
mydata.commit()

mydata=pymysql.connect(host="localhost",user="root",password="",database="dataform07")
mycursor=mydata.cursor()

mycursor.execute("create table if not exists d_mart (id int primary key auto_increment, name varchar(30), email varchar(20), mobile int unique key, password int)")
mydata.commit()