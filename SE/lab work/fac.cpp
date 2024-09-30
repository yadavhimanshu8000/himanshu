#include<iostream>

using namespace std;

class hello{
	
	public:
		
		fun()
		{
			int a,i,fact=1;
			
			cout<<"enter the no:";
			cin>>a;
			
			for(i=1;i<=a;i++)
			{
				fact=fact*i;
			}
			
			cout<<"fact:"<<fact;
		}
};

main()
{
	hello obj;
	obj.fun();
}
