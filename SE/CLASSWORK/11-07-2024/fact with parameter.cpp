#include<iostream>

using namespace std;

class z{
	
	public:
		
	z(int a)			//PARAMETER
	{
		int fact=1,i;
		
		for(i=1;i<=a;i++)
		fact=fact*i;
		
		{
			cout<<"factorial:"<<fact;
		}
	}
};

main()
{
      z obj(7);			//ARGUMENT
}
