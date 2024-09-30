/*
#include<iostream>

using namespace std;

class A{
	
	public:
		
		fun1(int x)
		{
			cout<<"A:"<<x<<endl;
		}
		
		fun1(string y)
		{
			cout<<"name:"<<y<<endl;
		}
		
		fun1()
		{
			cout<<"function overloading."<<endl;
		}
};

main()
{
	A obj;
	obj.fun1(5);
	obj.fun1("himanshu");
	obj.fun1();
}

*/

#include<iostream>

using namespace std;

class A{
	
	public:
		
		fun()
		{
			cout<<"heloo ji"<<endl;
		}
	
};

class B: public A{
	
	public:
		
		fun()
		{
			A::fun();
			cout<<"badiya ji";
		}
};

main()
{
	B obj;
	obj.fun();
}

