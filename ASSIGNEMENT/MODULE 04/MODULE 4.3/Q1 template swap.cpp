//Write a program of to swap the two values using templates..

#include"iostream"

using namespace std;

template <typename T>						// using template...

 T swa(T a, T b)					// using function with parametres...
 
{
	T temp;
	
	
    	// swapping the two number with temp...
	 temp= a;						
	 a= b;
	 b= temp;
	 
	 cout<<"A : "<<a<<"    B : "<<b<<endl;
	
}

main()
{
	cout<<"swapping:\n"<<endl;
	swa<int>(8,10);				// calling int...
		cout<<""<<endl;		
	swa<char>('J','H');				// calling char...
		cout<<""<<endl;	
	swa<string>("sonata","himanshu");	// calling string....
}
