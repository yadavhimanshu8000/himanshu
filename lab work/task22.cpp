#include<iostream>

using namespace std;

class A{
	public:
		
		fun(int a)
		{
			cout<<"this is overloaded:";
		}
		
		fun()
		{
			cout<<endl<<"hello:";
		}
		
		fun(string a)
		{
			cout<<endl<<"world:";
		}
};

main()
{
	A obj;
	obj.fun(2);
	obj.fun();
	obj.fun("hello");
}
