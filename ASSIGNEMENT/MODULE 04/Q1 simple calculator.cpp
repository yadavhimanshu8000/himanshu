// WAP to create simple calculator using class....

#include<iostream>

using namespace std;

class calculator{							//class declared...
	public:
		int a,b;
		
		fun1()								// function1 
		{
			cout<<"enter the A:";
			cin>>a;
			
			cout<<"enter the B:";
			cin>>b;
			
			
			cout<<"\nsimple calculator...\n";
			
			
			cout<<"addition:"<<a+b<<endl;
			cout<<"substraction:"<<a-b<<endl;
			cout<<"multiple:"<<a*b<<endl;
			cout<<"division:"<<(float)a/b<<endl;					// using float for div...
		}
};

main()
{
	calculator obj;
	obj.fun1();
}
