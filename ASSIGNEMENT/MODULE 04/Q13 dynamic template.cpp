// Write a program of to sort the array using templates...

#include<iostream>

using namespace std;

template <typename T>					//using template...

class A{								// create class...
	public:
		
		T a[5];						//using array..
		T i;
		T j;
		
		T sort()								//using function...
		{
			cout<<"enter the array."<<endl;
			
			for(i=0;i<5;i++)				//using loop display input...
			{
				cout<<i+1<<" ";
				cin>>a[i];
			}
		}
		
		T sorting()								//using function.....
		{
			T temp;
			
			for(i=0;i<5;i++)						//using loop...
			{
				for(j=i+1;j<5;j++)			//using loop
				{
					if(a[i]>a[j])
					{
						temp=a[i];						// swapping ....
						a[i]=a[j];
						a[j]=temp;
					}
				}
				cout<<endl<<"ascending:"<<a[i]<<endl;
			}
		}
		
		
};

main()
{
	A <int>obj;									//create obj....
	obj.sort();
	obj.sorting();	
}
