#include<iostream>

using namespace std;

template<typename t>

fun(t a,t b)
{
	a%2==0?cout<<"even"<<endl:cout<<endl<<"odd"<<endl;
}

	

main()
{
	fun<int>(8,7);

}
