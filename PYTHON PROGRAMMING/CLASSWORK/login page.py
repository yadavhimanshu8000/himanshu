try:
        
    import random
    otp=random.randint(1001,9999)



        
    d={}

    while True:
        menu="""
        press 1 for Signup
        press 2 for Login
        press 3 for Forget-password
        press 4 for Exit
    """
        print(menu)
        choice=int(input("Enter choice:"))

        if choice==1:
            print("*"*50,"Welcome to singup page","*"*50)
            name=(input("Enter your name:"))
            email=(input("Enter your email:"))
            mobile=int(input("Enter your mobile:"))
            password=int(input("Create a password:"))
            Cpassword=int(input("Re-enter password: "))

            if password==Cpassword:
                d['name']=name
                d['email']=email
                d['mobile']=mobile
                d['password']=password
                print("signup suceesfully.")

            else:
                print("Password & confirm password does not match !!")

        elif choice==2:
            print("*"*50,"welcome to login page")

            email=(input("Enter your email: "))
            password=int(input("Enter your password: "))

            if d['email']==email and d['password']==password:
                print("Login sucessfully.")
            
            else:
                print("Invalid credentials !!")

        elif choice==3:
            mobile=int(input("Enter your mobile: "))

            if d['mobile']==mobile:
                print("*"*50,"Your otp is: ",otp,"*"*50)

                uotp=int(input("Enter new password: "))

                if uotp==otp:
                    password=int(input("Enter new password: "))

                    d['password']=password

                else:
                    print("Invalid otp")

        elif choice==4:
            print("Thank you.!!")
            break

        else:
            print("Invalid choice.")



except:
    print("Invalid input !!")

finally:
    print("Come again !!")
