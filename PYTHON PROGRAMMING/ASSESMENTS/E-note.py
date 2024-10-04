import logging

file = open("notes1.txt","w")
file.close()

logging.basicConfig(filename='application.log', level=logging.INFO, format='%(asctime)s %(message)s')

while True:
    print("------------------------------------------------")
    print("Welcome to Python E - Note")
    print("------------------------------------------------")

    print("Press 1 for generate Note.")
    print("Press 2 for view Note.")
    print("Press 3 for Exit.")

    print("------------------------------------------------")
    num=int(input("Enter the choice: "))
    print("------------------------------------------------")

    if num==1:
        name=input("Enter Python E-Note Generator Name: ")
        title=input("Enter Python E-Note Title: ")
        content=input("Enter E- Note Content: ")
        
        note = f" \nGenerator_name: {name} \nE-Note Title: {title} \nE-Note Content: {content}\n"+"-"*30

        file=open("notes1.txt","a")
        file.write(note)
        file.close()
        logging.info(note)
        print()
        print("***************************")
        print("Note Added Successfully.")
        print("***************************")
        print()

    elif num==2:
        print()
        print("------------ Your Notes -----------------")
       
        file=open("notes1.txt","r")
        notes = file.readlines()
        
        for i in notes:
            print(i)
            
        
        file.close()
        logging.info("\n View Notes....!!!!")

    elif num==3:
        print("THANK YOU.")
        break


    else:
        print("SORRY INVALID CHOICE !!")






