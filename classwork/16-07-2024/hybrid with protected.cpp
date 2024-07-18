#include<iostream>

using namespace std;

class A
{
	protected:
		int a ,b;
		A()
		{
			cout<<"this is hybrid..."<<endl;
		}
	
};

class B:public A
{
	public:
		fun1()
		{
			cout<<"hello..."<<endl;
		}
};

class C:public A
{
	public:
		fun2()
		{
			cout<<"world...."<<endl;
		}
	
};

class D:public B, public C
{
	public:
		fun3()
		{
			cout<<"bor hogaya..."<<endl;
		}
	
};


main()
{
	D obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	
}
