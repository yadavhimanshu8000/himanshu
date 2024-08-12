#include<iostream>

using namespace std;

class A{
	public:
		
		fun()
		{
			cout<<"kaise hai aap log.."<<endl<<"badiya."<<endl;
		}
};

class B{
	public:
		
		fun()
		{
			cout<<"ms dhoni..."<<endl;
		}
};

class C:public A,public B{
	public:
		
		fun()
		{
			A::fun();
			B::fun();
			
			cout<<"the legend..";
		}
};

main()
{
	C obj;
	obj.fun();
}
