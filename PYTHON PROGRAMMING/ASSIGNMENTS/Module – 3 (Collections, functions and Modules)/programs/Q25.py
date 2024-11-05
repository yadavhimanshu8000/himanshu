# Write a Python program to unzip a list of tuples into individual lists. 

ziped=[(1,'himanshu'),(2,'vishal'),(3,'jayesh')]

        # empty list for unziped item
list1=[]
list2=[]
        # using loop for each item
for i in ziped:
                    # add item index:0 and index 1
    list1.append(i[0])
    list2.append(i[1])

print(f"original list: {ziped}")
print()
print(f"individual list: {list1}")
print()
print(f"individual list2: {list2}")
print()
