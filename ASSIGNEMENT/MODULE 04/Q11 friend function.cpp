/*Write a program to find the max number from given two numbers using 
friend function*/

#include<iostream>

using namespace std;

class A{
	public:
		
		int a,b;
		
		friend great(A &t);							// using friend function...
};

		great(A &t)
	
		{	
			cout<<"enter the number1:";				// data input...
			cin>>t.a;
			
			cout<<endl<<"enter the number2:";			// data input..
			cin>>t.b;
			
			if(t.a>t.b)								// if else condition...
			{
				cout<<endl<<"number1 is greater:"<<t.a;
			}
			else if(t.a<t.b)
			{
				cout<<endl<<"number2 is greater:"<<t.b;
			}
			
			else
			{
				cout<<endl<<"both number are equal.";
			}

		}

main()
{
	A obj;									// object create....
	great(obj);
}
