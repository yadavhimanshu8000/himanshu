#include<iostream>

using namespace std;

class A{
	public:
		
		inline multiple(int a,int b)
		{
			return (a*b);
		}
		
		inline cube(int a)
		{
			return (a*a*a);
		}
};

main()
{
	A obj;
	
	int a,b;
	
	cout<<"enter the number1:";
	cin>>a;
	
	cout<<"enter the number2:";
	cin>>b;
	
	cout<<endl<<"multiple:"<<obj.multiple(a,b)<<endl;
	cout<<endl<<"cube A: "<<obj.cube(a)<<endl;
	cout<<endl<<"cube B: "<<obj.cube(b)<<endl;
}
