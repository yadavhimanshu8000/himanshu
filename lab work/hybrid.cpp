#include<iostream>
using namespace std;

class A{
	
	protected:
		
	
		
		A()
		{
			
		cout<<"simple calculator. \n"<<endl;
		}
};

class B: protected A{
	
	public:
		
		fun1()
		{
			cout<<"all type of sum:\n";
		}
};

class C:  protected A{
	
	public:
		
			int a,b;
		
		fun2()
		{
				cout<<"enter the number:"<<endl;
				cin>>a;
				
				cout<<"enter the number:"<<endl;
				cin>>b;
		}

};

class D:public B , public C{
	
	public:
		
		fun3()
		{
			cout<<"addition:"<<a+b<<endl<<endl;
			cout<<"substraction:"<<a-b<<endl<<endl;
			cout<<"multiplication:"<<a*b<<endl<<endl;
			cout<<"division:"<<(float)a/b<<endl<<endl;
		}
};

main()
{
	D obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
}
