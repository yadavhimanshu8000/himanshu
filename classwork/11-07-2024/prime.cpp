#include<iostream>

using namespace std;

class z{
	
	public:
		
		z(int a)
		{
			int i,count=0;
			
		
			for(i=1;i<=a;i++)
			
			if(a%i==0)
			
			count++;
			
			if(count==2)
			{
				cout<<"prime number:";
			}
			else
			{
				cout<<"not prime number:";
			}
		}
};

main()
{
	z obj(9);
}
