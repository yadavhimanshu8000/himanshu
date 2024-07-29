/*Write a program to find the max number from given two numbers using 
friend function*/

#include<iostream>

using namespace std;

class A{					// create class.
	public:
		
		int a,b;			// dta member.
		
		friend great(A &t);							// using friend function..
};

		great(A &t)
	
		{	
								// data input...
			cout<<"enter the number1:";			
			cin>>t.a;
								// data input...
			cout<<endl<<"enter the number2:";			
			cin>>t.b;
			
			
					// using if else condition to find max number...
			if(t.a>t.b)							
			{
				cout<<endl<<"number1 is maximum:"<<t.a;
			}
			else if(t.a<t.b)
			{
				cout<<endl<<"number2 is maximum:"<<t.b;
			}
			
			else
			{
				cout<<endl<<"both number are equal.";
			}

		}

main()
{
	A obj;									// object create.
	great(obj);
}
