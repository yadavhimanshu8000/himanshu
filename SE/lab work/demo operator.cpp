#include<iostream>

using namespace std;

class A{
	
	int a[5],i;
	
	public:
		input()
		{
			for(i=0;i<5;i++)
			{
				cout<<i+1<<" ";
				cin>>a[i];
			}
		}
		
		A operator+(A const &obj)
		{
			A r;
			
			for(i=0;i<5;i++)
			{
				r.a[i]=a[i]+obj.a[i];
			}
			
			return r;
		}
		
		display()
		{
			for(i=0;i<5;i++)
			{
				cout<<i+1<<" ";
			}
		}
		
		
};

main()
{
	A obj,obj1,obj2;
	
	cout<<"enter first number1:";
	obj1.input();
	
	cout<<"enter second number2:";
	obj2.input();
	
	obj=obj1+obj2;
	
	cout<<"addition of two matrix:";
	
	obj.display();
}
