/*Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account
 
2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance */

#include<iostream>

using namespace std;

class A{
	private:
		
		string name;					// ALL ARE DATA MEMBER...
		float account;
		string type_of_account;
		float balance;
		
		public: 
		
		fun1()							// MEMBER FUNCTION....
		
		{
		
			cout<<"enter the depositor name:";				// NAME INPUT
			cin>>name;
			
			cout<<endl<<"enter the account number:";		//	ACCOUNT NUMBER INPUT
			cin>>account;
			
			cout<<endl<<"enter the types of account:";		// TPES OF ACCOUNT INPUT
			cin>>type_of_account;
			
				
		}
		
		deposited()								// MEMBER FUNCTION FOR DEPOSITED AMOUNT...
		{
			float a;
				
			cout<<"\n-------------------------------------------------\n";
			cout<<"enter the deposited amount:";								//DEPOSITED AMOUNT...
			cin>>a;
			
			balance+=a;								// ADD DEPOSITED AMOUNT IN BALANCE.
			
			cout<<"total balance:"<<balance<<endl;
			
			
				
		}
		withdraw()										// MEMBER FUNCTION FOR WITHDRAW AMOUNT...
		{
			float b;
			
			cout<<"\n-------------------------------------------------\n";
			
			cout<<"enter amount how much withdraw:";				//WITHDRAW AMOUNT
			cin>>b;
			
			if(b<=balance)						//CONDITION..
				{
					balance -= b;											// WITHDRAW AMOUNT - FROM BALANCE.
					
					cout<<"total balance:"<<balance<<endl;
				}
				
				else
				{
					cout<<endl<<"INSUFFICIENT BALANCE..."<<endl;
				}
				
		
		}
		
		display()								// FUNCTION FOR DISPLAY THE NAME AND TOTAL BALANCE
		{
			cout<<"\n-------------------------------------------------\n";
			cout<<"name:"<<name<<endl;
			cout<<"total balance:"<<balance<<endl;
			
			
		}
		
		
		
};

main()
{
	A obj;						//OBJ CREATE..
	obj.fun1();
	obj.deposited();
	obj.withdraw();
	obj.display();
}
