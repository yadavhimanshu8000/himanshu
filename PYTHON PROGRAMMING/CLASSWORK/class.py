'''
class Myclass:
    def myfun1(self):

        n=input("Enter name: ")
        n1=n[::-1]

        if n==n1:
            print("palindrome!!")

        else:
            print("not palindrome !!")

    def fun1(self):
        print(" this if function !!")

    def fun2(self):
        print("this second funtion !!")

obj= Myclass()
obj.myfun1()
obj.fun1()
obj.fun2()



# Initialize a dictionary with translations
translations = {
    "hello": "hola",
    "goodbye": "adiós",
    "please": "por favor",
    "thank you": "gracias",
    "yes": "sí",
    "no": "no"
}

# Main loop
while True:
    word = input("Enter an English word to translate to Spanish (or 'exit' to quit): ")
    if word.lower() == 'exit':
        break
    if word.lower() in translations:
        print(f"The Spanish translation of '{word}' is: {translations[word.lower()]}")
    else:
        print("Translation not found.")
'''

# Simple Favorite Fruits Program

# Initialize an empty dictionary
favorite_fruits = {}

# Main loop
while True:
    name = input("Enter your name (or 'exit' to quit): ")
    if name == 'exit':
        break
    
    if name in favorite_fruits:
        print(f"{name}'s favorite fruit is: {favorite_fruits[name]}")
    else:
        fruit = input(f"Enter {name}'s favorite fruit: ")
        favorite_fruits[name] = fruit
        print(f"Favorite fruit for {name} added.")

# Display all favorite fruits
print("\nFavorite Fruits List:")
for name, fruit in favorite_fruits.items():
    print(f"{name}: {fruit}")
