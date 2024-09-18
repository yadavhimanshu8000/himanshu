/*Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 

Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area

*/

#include<iostream>			

using namespace std;

class calculate{						// create one class....
	public:
		
		
				// same member function but different parameters...
		fun(int radius)										// using int radius.
		{
			cout<<endl<<" area of circle:"<<3.14*radius*radius<<endl;
		}
		
		fun(int length ,int height)							// using int length and int heigth.
		{
			cout<<endl<<" area of rectangle:"<<length*height<<endl;
		}
		
		fun(int base, float height)							// using int base and float height.
		{
			cout<<endl<<" area of triangle:"<<base*height*0.5<<endl;
		}
};

main()
{
	int radius,length,heigth,base,triheight;			// data member....
	
	calculate obj;								// object create...
	cout<<"enter the radius:";											// input radius...
	cin>>radius;
	obj.fun(radius);
	
	cout<<"\n----------------------------\n";
	
	cout<<"enter the length:";									// input length...
	cin>>length;
	
	cout<<"enter the heigth:";									//input heigth...
	cin>>heigth;
	obj.fun(length,heigth);
	
	cout<<"\n----------------------------\n";
	
	cout<<"enter the base:";									//input base...
	cin>>base;	
	
	cout<<"enter the height:";									// input height...
	cin>>triheight;
	
	obj.fun(base,(float)triheight);	
}
