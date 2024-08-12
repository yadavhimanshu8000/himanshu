#include<iostream>

using namespace std;

class A{
	protected:
		int a,b;
		
		A(){
			cout<<"hello:"<<endl;
		}
};

class B{
	public:
		
		fun()
		{
			cout<<"world:"<<endl;
		}
};

class C:public A,public B{
	public:
		
		fun1()
		{
			cout<<"enter the number1:";
			cin>>a;
			
			cout<<"enter the number2:";
			cin>>b;
			
			cout<<"A  :"<<a<<endl<<"B  :"<<b<<endl;
			
		}
};

main()
{
	C obj;
	obj.fun();
	obj.fun1();
}
