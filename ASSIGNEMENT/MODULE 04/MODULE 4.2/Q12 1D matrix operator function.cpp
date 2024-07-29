// Write a Program of Two 1D Matrix Addition using Operator Overloading..

#include<iostream>

using namespace std;

class A{						// create class.
	
			// data member using array. 
	int a[5],i;			
	
	public:
		input()						// member function.
		{
				// using for loop .
			for(i=0;i<5;i++)			
			{
				cout<<i+1<<" ";
				cin>>a[i];
			}
		
		}
		
					// using operator function.
		A operator+(A &obj)		
		{
			A result;
			
			for(i=0;i<5;i++)				// for loop
			{
				result.a[i]=a[i]+obj.a[i];
				
			}
			return result;					// return result.
			
		}
		display()				// member function display...
		
		{
			for(i=0;i<5;i++)
			{
					cout<<" "<<a[i];
			}
		
		}
	
		
};

main()
{
	A obj,obj1,obj2;				// create obj.
	
	
							// input 1st matrix
	cout<<"Enter 1st Matrix : "<<endl;
	
	obj1.input();
							// input 2nd matrix
	cout<<"Enter 2nd matrix : "<<endl;
	
	obj2.input();
					// addition of matrix1 and matrix2
	obj = obj1 + obj2 ; 
	
	cout<<"Addition of two matrix : "<<endl;
	
	obj.display();
} 
