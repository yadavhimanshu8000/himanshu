#include<iostream>

using namespace std;

class A{
	public:
		int x,y;
		
		A(int a ,int b)
		{
			x=a;
			y=b;
			
			cout<<"A:"<<a<<endl;
			cout<<"B:"<<b<<endl;
		}
		
		A(A &t)						//copy...
		{
			x=t.x;
			y=t.y;
			
			cout<<"copy constructor called."<<endl;
			cout<<"A:"<<x<<endl;
			cout<<"B:"<<y<<endl;
		}
		
		
};

main()
{
	A obj(8,9);
    A obj1(obj);
}
