#include<iostream>

using namespace std;

class constructor{									// constructor program ....... class name also constructor...
	public:
		
		
		constructor()
		{
			cout<<"lab work..."<<endl;
		}
	


	prime()
	{
		int i,a,c=0;
		
		cout<<"enter the number:"<<endl;
		cin>>a;
		
		for(i=1;i<=a;i++)
		
		{
			if(a%i==0)
			{
				c++;
			}
			
		}
			if(c==2)
			{
				cout<<"number is prime.."<<endl;
			}
			
			else
			{
				cout<<"number is not prime..."<<endl;
			}
			
	}
			~constructor()
			{
				cout<<"thanku ...."<<endl;
			}
			
			
			
	
		
		

	};	

main()
{
	constructor obj;
	obj.prime();
}
