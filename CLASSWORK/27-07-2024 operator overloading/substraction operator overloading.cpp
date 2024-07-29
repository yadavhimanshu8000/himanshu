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
		
		image operator-(image const &obj)
		{
			image result;
			
			result.height=height-obj.height;
			result.width=width-obj.width;
			
			return result;
		}
		void print()
		{
			cout<<"\n\n\t"<<height<<" * "<<width;
		}
};

main()
{
	image I1(200,50),I2(100,15);
	
	image I3=I1-I2;
	
	I3.print();		
}
