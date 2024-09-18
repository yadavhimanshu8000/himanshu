#include<iostream>

using namespace std;

class A{
	protected:
		int a,b;
		A()
		{
			cout<<"this is constructor:"<<endl;
		}
};

	
		class B{
			public:
			fun1()
			{
				cout<<"this is function of class B:"<<endl;
			}
		};
		
		class c:public A,public B{
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
	c obj;
	obj.fun1();
	obj.fun2();	
}
