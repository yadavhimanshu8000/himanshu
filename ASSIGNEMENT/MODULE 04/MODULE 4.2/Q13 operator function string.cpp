// Write a program to concatenate the two strings using Operator Overloading

#include<iostream>

using namespace std;

class A{							// create class.
	
	string hello;						// using string data member.
	
	
	public:
		
		A(){
			
		};
		A (string h)			// member function.
		{
			hello=h;
		}
		
		A operator+(A &obj)		// using operator function
		{
			A r;
			
			{
				r.hello=hello+" "+obj.hello;
			}
			return r;				// return r.
		}
		
		display()					// member function.					/
		{
			cout<<"\n\n\t"<<hello<<endl;	
		}
};

main()
{
	A obj1("himanshu"),obj2("sonata");				// create obj with parametres
	
	A obj=obj1+obj2;				// addition.
	
	obj.display();
	
	
}
