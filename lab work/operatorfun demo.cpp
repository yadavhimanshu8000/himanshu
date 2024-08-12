#include<iostream>

using namespace std;

class image{
	public:
		
		int height,width;
		
		image(int h=0,int w=0)
		{
			height=h;
			width=w;
		}
		
		image operator+(image &obj)
			{
				image result;
				
				result.height=height+obj.height;
				result.width=width+obj.width;
				
				return result;
			}
			
			print()
			{
				cout<<"height: "<<height<<endl<<endl<<"width: "<<width<<endl;
			}
};

main()
{
	image obj(200,500),obj1(500,800);
	image obj3=obj+obj1;
	obj3.print();
	
}
