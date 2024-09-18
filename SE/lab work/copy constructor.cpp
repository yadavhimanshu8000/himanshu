#include<iostream>

using namespace std;

class A{
	public:
		
	int x,y;
	
	A(int a,int b)
	{
		x=a;
		y=b;
		
		cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
	}	
	
	A(A &t)
	{
		x=t.x;
		y=t.y;
		
		cout<<endl<<"copy constructor."<<endl;
		
		cout<<endl<<"X: "<<x<<endl<<"Y: "<<y<<endl;
		
		
	}
};

main()
{
	A obj(10,20);
	A obj1 (obj);
}
