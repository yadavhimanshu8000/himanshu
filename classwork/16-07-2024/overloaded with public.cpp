#include<iostream>

using namespace std;

class A
{
	public:
		fun1(int a)
		{
			cout<<"this is overloaded.."<<endl;
		}
		
		fun1()
		{
			cout<<"without data member..."<<endl;
		}
		fun1(string a)
		{
			cout<<"using string...."<<endl;
		}
		
	
};





main()
{
	A obj;
	obj.fun1(20);
	obj.fun1();
	obj.fun1("lucky");
	
}
