print()
print("BOOKMYSHOW")

while True:
    print("--------------------------------------------------")
    print("Choose what you have want")
    print("Press 1 for miraj")
    print("Press 2 for citygold")
    print("Press 3 for golden")
    print("Press 4 for applemultiplex")
    print("Press 5 for exit")
    print("---------------------------------------------------")
   

    choice=int(input("Enter the choice:"))

    count=0

    if(choice==1):
        print("-------------------------------------------------")
        print("Welcome to miraj")
        print("Press 1 for silver RS:80")
        print("Press 2 for gold RS:100")
        print("Press 3 for platinium RS:150")
        print("-------------------------------------------------")


        menu=int(input("Enter the menu choice:"))

        if(menu==1):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*80
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*80+(ticket*80*18/100)
            print(f"TOTAL AMOUNT: {count}")
            
        elif(menu==2):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*100
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*100+(ticket*100*18/100)
            print(f"TOTAL AMOUNT: {count}")

        elif(menu==3):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*150
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*150+(ticket*150*18/100)
            print(f"TOTAL AMOUNT: {count}")

        else:
            print("Invalid choice.")

    elif(choice==2):
        print("----------------------------------------------")
        print("Welcome to citygold")
        print("Press 1 for silver RS:100")
        print("Press 2 for gold RS:150")
        print("Press 3 for platinium RS:200")
        print("----------------------------------------------")


        menu=int(input("Enter the menu choice:"))

        if(menu==1):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*100
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*100+(ticket*100*18/100)
            print(f"TOTAL AMOUNT: {count}")
            
        elif(menu==2):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*150
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*150+(ticket*150*18/100)
            print(f"TOTAL AMOUNT: {count}")

        elif(menu==3):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*200
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*200+(ticket*200*18/100)
            print(f"TOTAL AMOUNT: {count}")

        else:
            print("Invalid choice.")


    elif(choice==3):
        print("----------------------------------------------")
        print("Welcome to golden")
        print("Press 1 for silver RS:100")
        print("Press 2 for gold RS:150")
        print("Press 3 for platinium RS:200")
        print("----------------------------------------------")


        menu=int(input("Enter the menu choice:"))

        if(menu==1):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*100
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*100+(ticket*100*18/100)
            print(f"TOTAL AMOUNT: {count}")

        elif(menu==2):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*150
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*150+(ticket*150*18/100)
            print(f"TOTAL AMOUNT: {count}")

        elif(menu==3):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*200
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*200+(ticket*200*18/100)
            print(f"TOTAL AMOUNT: {count}")

        else:
            print("Invalid choice.")

       
    elif(choice==4):
        print("----------------------------------------------")
        print("Welcome to applemultiplex")
        print("Press 1 for silver RS:150")
        print("Press 2 for gold RS:200")
        print("Press 3 for platinium RS:300")
        print("----------------------------------------------")


        menu=int(input("Enter the menu choice:"))

        if(menu==1):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*150
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*150+(ticket*150*18/100)
            print(f"TOTAL AMOUNT: {count}")

        elif(menu==2):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*200
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*200+(ticket*200*18/100)
            print(f"TOTAL AMOUNT: {count}")

        elif(menu==3):

            ticket=int(input("How many ticket you want to buy:"))
            print("-----------------------------------------------------")
            print(" ..................TICKET BILL..................")
            count=ticket*300
            print(f"AMOUNT: {count}")
            print(f"INCLUDE CGST:9%")
            print(f"INCLUDE SGST:9%")
            count=ticket*300+(ticket*300*18/100)
            print(f"TOTAL AMOUNT: {count}")

        else:
            print("Invalid choice.")

    
    elif(choice==5):
        print(f"THANK YOU FOR VISITING {chr(2)}")
        break

    else:
        print("Invalid choice.")
        
    c = input("DO YOU WANNA ORDER MORE TICKETS ? ('Yes' OR 'No')")

    print("-----------------------------------------------------")

    if c == 'No':
        break;
    elif c == 'Yes':
        continue
    else:
        print("Enter a right choice")







       








