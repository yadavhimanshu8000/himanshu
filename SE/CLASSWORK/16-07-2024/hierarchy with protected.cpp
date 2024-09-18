#include<iostream>

using namespace std;

class A
{
	protected:
		int a,b;
		A()
		{
			cout<<"this is protected.."<<endl;
		}
		
};

class B:public A
{
	public:
		fun1()
		{
			cout<<"this class B..."<<endl;
		}
	
};

class C:public A
{
	public:
		fun2()
		{
			cout<<"enter A:"<<endl;
			cin>>a;
			
			cout<<"enter B:"<<endl;
			cin>>b;
			
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
		}
	
};



 main()
{
	B himanshu;
	himanshu.fun1();
	
	C obj;
	obj.fun2();
		
}
