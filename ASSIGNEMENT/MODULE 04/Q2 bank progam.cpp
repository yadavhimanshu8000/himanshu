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
		
		string name;					// all are data members...
		float account;
		string type_of_account;
		float balance;
		
		public: 
		
		fun1()							// member function....
		
		{
		
			cout<<"enter the depositor name:";				// name ,no, and type,.... input
			cin>>name;
			
			cout<<endl<<"enter the account number:";
			cin>>account;
			
			cout<<endl<<"enter the types of account:";
			cin>>type_of_account;
			
				
		}
		
		deposited()								// function for deposited amount...
		{
			float a;
				
			cout<<"\n-------------------------------------------------\n";
			cout<<"enter the deposited amount:";
			cin>>a;
			
			balance+=a;
			
			cout<<"total balance:"<<balance<<endl;
			
			
				
		}
		withdraw()										// function for withdraw amount...
		{
			float b;
			
			cout<<"\n-------------------------------------------------\n";
			
			cout<<"enter amount how much withdraw:";
			cin>>b;
			
			if(b<=balance)
				{
					balance -= b;
					
					cout<<"total balance:"<<balance<<endl;
				}
				
				else
				{
					cout<<endl<<"paise nhi hai aukat mai hai raha..."<<endl;
				}
				
		
		}
		
		display()								// function for display the name and total balance
		{
			cout<<"\n-------------------------------------------------\n";
			cout<<"name:"<<name<<endl;
			cout<<"total balance:"<<balance<<endl;
			
			
		}
		
		
		
};

main()
{
	A obj;
	obj.fun1();
	obj.deposited();
	obj.withdraw();
	obj.display();
}
