/*Write a program of Addition, Subtraction, Division, Multiplication using 
*constructor*/

#include<iostream>

using namespace std;

class constructor{						// create class...
	public:
	
		constructor()				// using construction...
		{
			
				int a,b;				// data member...
				
				
			cout<<"calculator...."<<endl;
			
			cout<<endl<<"enter the number1:";					// input a...
			cin>>a;
			
			cout<<endl<<"enter the number2:";					// input b...
			cin>>b;
			
			cout<<"\n----------------------------------------------\n";
			
			cout<<endl<<"addition:"<<a+b<<endl;				
			cout<<endl<<"subtraction:"<<a-b<<endl;
			cout<<endl<<"multiplication:"<<a*b<<endl;
			cout<<endl<<"division:"<<(float) a/b<<endl;
			
			
		}
	
};


main()
{
	constructor obj;					// create obj...
	
}
