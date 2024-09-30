#include<iostream>

using namespace std;

class calculator{
	
	public:
		
			int a,b;
		fun(){
		
			
			cout<<"enter the number";
			cin>>a;
			
			cout<<"enter 2";
			cin>>b;
			
			cout<<"addition"<<a+b<<endl;
			
		}
		
		fun1(){
			
			
			cout<<"enter the number";
			cin>>a;
			
			cout<<"enter 2";
			cin>>b;
			
			cout<<"addition"<<a-b<<endl;
			
		}
};

main()
{
	calculator obj;
	obj.fun();
	obj.fun1();
}
