#include<iostream>
using namespace std;

class A{
	
	public:
	
	fun1(){
		
		
		cout<<"helloo world:";
	}
	
};

class B: public A{
	
	public:
	
	fun2()
	{
		cout<<"himanshu.";
		
	}
};

class C: public A{
	
	public:
	
	fun3()
	{
		cout<<"singh.";
		
	}
};

main()
{
	B obj;
	obj.fun2();
	C obj1;
	obj1.fun3();
	obj.fun1();
}
