s="python programming"

#check length of string....
print(len(s))

#first word capital...
print(s.capitalize())

# all string in lower..
print(s.lower())

#small string to capital and ... capital string to small string
print(s.swapcase())

# string in center position...
print(s.center(30,"*"))

# count in string how many p are there..
print(s.count("p"))

# In string word find word number...
print(s.find("p",2))

# In string replace the word..
print(s.replace("p","H"))

# check whether in string only alphabet/numbers availble or not. if available then return true otherwise return false(space also count.) 
print(s.isalnum())

#check only alpha then give true but in string space then give false..
print(s.isalpha())

# In are convert in first letter capital..
print(s.title())

# all string are in capital letter..
print(s.upper())


# all string in lower order..
print(s.casefold())

# in string ng agar hoto true otherwise false
print(s.endswith("ng"))

#like find..
print(s.index("p"))

# string isascii agar hoto true warna false
print(s.isascii())

# join string bettween space- space-
print("-".join(s))
