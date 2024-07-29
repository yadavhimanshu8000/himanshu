// *WAP to create simple calculator using class....

#include<iostream>

using namespace std;

class calculator{														//CLASS DECLARED...
	public:
		int a,b;			// DATA MEMBER...
		
		fun1()									// MEMEBER FUNCTION...
		{
			cout<<"enter the A:";
			cin>>a;
			
			cout<<"enter the B:";
			cin>>b;
			
			
			cout<<"\nsimple calculator...\n";
			
			
			cout<<"addition:"<<a+b<<endl;
			cout<<"substraction:"<<a-b<<endl;
			cout<<"multiple:"<<a*b<<endl;
			cout<<"division:"<<(float)a/b<<endl;					// USING FLOAT FOR DIV...
		}
};

main()
{
	calculator obj;							//	OBJ CREATE
	obj.fun1();									
}
