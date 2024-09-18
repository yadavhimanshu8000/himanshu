#include<iostream>

using namespace std;

class A{
	public:
		
		fun()
		{
			cout<<"kaise hai aap log.."<<endl<<"badiya."<<endl;
		}
};

class B:public A{
	public:
		
		fun()
		{
			A::fun();
			cout<<"ms dhoni..."<<endl;
		}
};

main()
{
	B obj;
	obj.fun();
}
