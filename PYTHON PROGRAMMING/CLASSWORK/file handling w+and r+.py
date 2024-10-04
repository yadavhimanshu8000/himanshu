
'''


file=open("read1.txt","w")
file.write("this append method \n hello\n world")
file.close()

file = open("read1.txt","r")
print(file.readline())
file.close()


'''
file=open("C:\\Users\\HIMANSHU\\OneDrive\\Documents\\c programming\\himanshu\\PYTHON PROGRAMMING\\CLASSWORK\\test2.txt","w+")
file.write("write plus..")
file.seek(0)
print(file.tell())
print(file.readline())
file.close()
