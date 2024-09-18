#include<iostream>

using namespace std;

class constructor{
	public:
		
		constructor()
		{
			cout<<"hello world.."<<endl;
		}
		
		num()
		{
			int a,b;
			
			cout<<"enter the number1:"<<endl;
			cin>>a;
			
			cout<<"enter the number2"<<endl;
			cin>>b;
			
			
			cout<<"a:"<<a<<endl;
			cout<<"b:"<<b<<endl;
		}
		
	       	~constructor()
	       	{
	       		cout<<"\nnot come again.."<<endl;
			}
};

main()
{
	constructor obj;
	obj.num();
}
