#include<iostream>

using namespace std;

class image{
	
	int height, width;
	
	public:
		image(int h=0, int w=0)
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
		void print()
		{
			cout<<"height : "<<height<<"    Width : "<<width;
		}
};

main()
{
	image I1(100,200),I2(200,300);
	
	image I3=I1+I2;
	
	I3.print();		
}
