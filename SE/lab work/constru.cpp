#include<iostream>

using namespace std;

class hello{
	
	public:
		
		int a,b,i;
		
		hello(){
			
			cout<<"hello world:"<<endl;
		}
		
		prime(){
			
			b=0;
			
			cout<<"enter the number";
			cin>>a;
			
			for(i=1;i<=a;i++)
			{
				if(a%i==0)
				{
					b++;
				}
				
			}
			if(b==2)
			{
				cout<<"number is prime."<<endl;
			}
			else
			{
				cout<<"number is not prime.";
			}
		
			
		}
			
			~hello()
			{
				cout<<"end";
			}
			
};

main()
{
	hello obj;
	obj.prime();
}

