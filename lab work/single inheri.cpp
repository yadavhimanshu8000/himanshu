#include<iostream>

using namespace std;

class a{
	public:
		
		fun1()
		{
			cout<<"hello world."<<endl;
		}
};

class b:public a{
	public:
		
		fun2()
		{
			cout<<"world hello."<<endl;
		}
};

main()
{
	b obj;
	obj.fun1();
	obj.fun2();
}
