#include<iostream>

using namespace std;

class factorial{
	
	public:
		
	fun()
	{
	
	int n,i,fact=1;
	
	cout<<"enter the number:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	cout<<endl<<"factorial:"<<fact;
	
}
};

main()
{
	factorial obj;
	obj.fun();
}

