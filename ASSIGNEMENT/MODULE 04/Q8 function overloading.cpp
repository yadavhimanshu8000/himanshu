/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

#include<iostream>

using namespace std;

class mathematic{
	public:
		
		fun(int a, int b)
		{
			cout<<endl<<"addition the two number:"<<a+b<<endl;
		}
		
		fun(int a, float b)
		{
			cout<<endl<<"substraction the two number:"<<a-b<<endl;
		}
		
		fun(float a, float b)
		{
			cout<<endl<<"multiplication the two number:"<<a*b<<endl;
		}
		
		fun(double a ,double b)
		{
			cout<<endl<<"division the two number:"<<(float) a/b<<endl;
		}
};

main()
{
	mathematic obj;
	obj.fun(20,40);
	obj.fun((int)10,(float)20);
	obj.fun((float)40,(float)50);
	obj.fun((double)20,(double)2);
}

