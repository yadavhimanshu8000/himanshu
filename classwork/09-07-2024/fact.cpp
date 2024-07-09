#include<iostream>

using namespace std;

main()
{
	int n,i,fact=1;
	
	cout<<"enter the number:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	cout<<"factorial:"<<fact;
	
}
