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
		fun1(A &t)
		{
			cout<<"enter the number1:"<<endl;
			cin>>t.a;
			
			cout<<"enter the number2:"<<endl;
			cin>>t.b;
			
			cout<<"\naddition:"<<t.a+t.b<<endl;
		}
};

class C{
	public:
		fun2(A &t)
		{
			int i;
			
			cout<<"enter the first element....\n";
	
			for(i=0;i<5;i++)
			{
				cout<<i+1<<": ";
				cin>>t.c[i];
			}
			
			
			cout<<"enter the second element.....\n";
			
			for(i=0;i<5;i++)
			{
				cout<<i+1<<": ";
				cin>>t.d[i];
			}
			
			cout<<"addition of five element....\n" ;
			
			for(i=0;i<5;i++)
			{
				
			cout<<"\naddition"<<t.c[i]+t.d[i]<<endl;
			}
		}
	
	
};



main()
{
	A obj;
	B obj1;
	obj1.fun1(obj);
	C obj2;
	obj2.fun2(obj);
}
