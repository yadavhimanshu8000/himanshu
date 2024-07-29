#include<iostream>

using namespace std;

template<typename T>
T fun(T a, T b)
{
	a%2==0?cout<<"even"<<endl:cout<<"odd"<<endl;
}

main()
{
	fun<int>(5,8);
	fun<char>('a','b');
}
