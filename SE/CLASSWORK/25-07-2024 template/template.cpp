#include<iostream>

using namespace std;

template<typename T>
T even(T a,T b)
{
	if(a>b)
	{
		cout<<"A is greater."<<endl;
	}
	else
	{
		cout<<"B is greater."<<endl;
	}
}

main()
{
	even<int>(5,2);
	even<char>('a','e');
}
