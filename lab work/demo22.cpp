#include<iostream>

using namespace std;

class A{
	
	int height,width;
	public:
		A(int h=0,int w=0){
			height=h;
			width=w;
		
		}
		
		A operator*(A &obj)
		{
			A result;
			{
				result.height=height*obj.height;
				result.width=width*obj.width;
				
			}
			return result;
		}
		
		display()
		{
			cout<<"height\t: "<<height<<"    width\t: "<<width<<endl;
		}
		
		
};

main()
{
	A obj(20,30),obj1(30,20);
	A obj3=obj*obj1;
	obj3.display();
}
