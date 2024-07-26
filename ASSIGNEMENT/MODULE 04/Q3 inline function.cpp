/*Write a program to find the multiplication values and the cubic values using 

inline function*/

#include<iostream>

using namespace std;

class himanshu{
	public:
		
		inline multiple(int a,int b)
		{
			return(a*b);
		}
		
	inline cube(int a)
    	{
		
		return(a*a*a);
		}	
};

main()
{
	himanshu obj;
	int a,b;
	cout<<"enter the number1:";
	cin>>a;
	
	cout<<"enter the number2:";
	cin>>b;
	
	cout<<"multiplcation:"<<obj.multiple(a,b)<<endl;
	cout<<"A cube:"<<obj.cube(a)<<endl;
	cout<<"B cube:"<<obj.cube(b)<<endl;
	
}
