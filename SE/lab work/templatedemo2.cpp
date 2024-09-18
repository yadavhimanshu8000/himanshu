#include<iostream>

using namespace std;

template <typename t>

fun(t a,t b)
{
	if(a>b)
	{
		cout<<"A is greater."<<endl;
	}
	else if(b>a) 
	{
		cout<<endl<<"B is greater"<<endl;
	}
	else
	{
		cout<<endl<<"both are same."<<endl;
	}
}

main()
{
	fun<int>(100,20);
	fun<char>('r','r');
	fun<string>("abc","ade");
}
