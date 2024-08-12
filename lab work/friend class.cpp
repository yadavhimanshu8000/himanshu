#include<iostream>

using namespace std;

class A{
	private:
		
		int a,b,c[5],d[5];
		
		friend class B;
		friend class C;
};

class B{
	public:
		
		fun(A &t)
		{
			cout<<"enter the number1:";
			cin>>t.a;
			
			cout<<"enter the number2:";
			cin>>t.b;
			
			cout<<"addition:"<<t.a+t.b<<endl;	
		}
		
};

class C{
	public:
		
		int i;
		
		fun1(A &t)
		{
			cout<<"enter first five num:";
			
			for(i=0;i<5;i++)
			{
				cout<<i+1<<": ";
				cout<<t.c[i];
			}
			
				cout<<"enter second five num:"<<endl;
			
			for(i=0;i<5;i++)
			{
				cout<<i+1<<": ";
				cout<<t.d[i];
			}
			
			for(i=0;i<5;i++)
			{
				cout<<"addition of five number:"<<t.c[i]+t.d[i]<<endl;
			}
		}
};

main()
{
	A obj;
	B obj1;
	obj1.fun(obj);
	C obj2;
	obj2.fun1(obj);
}
