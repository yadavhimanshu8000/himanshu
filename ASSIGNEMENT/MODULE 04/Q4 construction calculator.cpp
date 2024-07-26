/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor*/

#include<iostream>

using namespace std;

class constructor{
	public:
		
		constructor()
		{
			int a,b;
			cout<<"calculator...."<<endl;
			
			cout<<"enter the number1:";
			cin>>a;
			
			cout<<"enter the number2:";
			cin>>b;
			
			cout<<endl<<"addition"<<a+b<<endl;
			cout<<endl<<"subtraction"<<a-b<<endl;
			cout<<endl<<"multiplication"<<a*b<<endl;
			cout<<endl<<"division"<<(float) a/b<<endl;
			
			
		}
	
};


main()
{
	constructor obj;
	
}
