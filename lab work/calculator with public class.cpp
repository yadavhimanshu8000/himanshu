#include<iostream>

using namespace std;


class calculator
{
	public:
		
		int a,b;
		
		fun1()
		{
			
			cout<<"****************addition the two number****************\n"<<endl;
			
			cout<<"enter the number1:"<<endl;
			cin>>a;
			
			cout<<"enter the number2:"<<endl;
			cin>>b;
			
			cout<<"addition of two number:"<<a+b<<endl;
		}
		
		fun2()
		{
			cout<<"\n----------------------------------------------------------------------------\n"<<endl;
			cout<<"\n****************substraction the two number**************\n"<<endl;
			
			cout<<"\nenter the number1:"<<endl;
			cin>>a;
			
			cout<<"enter the number2"<<endl;
			cin>>b;
			
			cout<<"substraction the two number:"<<a-b<<endl;
		}
		
		fun3()
		{
			cout<<"\n----------------------------------------------------------------------------\n"<<endl;
			cout<<"\n****************multiple the two number****************\n"<<endl;
			
			cout<<"\nenter the number1:"<<endl;
			cin>>a;
			
			cout<<"enter the number2:"<<endl;
			cin>>b;
			
			cout<<"multiple the two number:"<<a*b<<endl;
		}
		
		fun4()
		{
			cout<<"\n----------------------------------------------------------------------------\n"<<endl;
			cout<<"\n****************division the two number****************\n"<<endl;
			
			cout<<"\nenter the number1:"<<endl;
			cin>>a;
			
			cout<<"enter the number2:"<<endl;
			cin>>b;
			
			cout<<"division of two number:"<<(float)a/b<<endl;
			
		}
		
		~calculator()
		{
			cout<<"\nchal nikal..."<<endl;
		}

	
};

main()
{
	calculator obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
}
