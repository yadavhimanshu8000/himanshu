/*Write a program to swap the two numbers using friend function without 
using third variable */

#include<iostream>

using namespace std;

class swa{						// create class..
	public:
		
		int a,b;				// data member..
		
		friend fun1(swa &t);						// using friend function..
};

	fun1(swa &t)
	    {
	
		cout<<"enter the A:";
		cin>>t.a;
		
		cout<<endl<<"enter the B:";
		cin>>t.b;
		
				// without use of third variable.
		t.b=t.a*t.b;
		t.a=t.b/t.a;
		t.b=t.b/t.a;
		
		cout<<"\n-------------------------------\n";
		cout<<endl<<"swapping two number. \n \nA:"<<t.a<<endl;
		cout<<endl<<"B:"<<t.b<<endl;
		
	}


main()
{
	swa obj;			// create obj.
	fun1(obj);
}
