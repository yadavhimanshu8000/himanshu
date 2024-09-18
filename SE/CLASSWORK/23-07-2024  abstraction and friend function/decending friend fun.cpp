#include<iostream>

using namespace std;

class array{
	public:
		int a[5];
		
		friend fun1(array& t);
		
};

	fun1(array& t)
	{
		int i,j,temp=0;
		
		cout<<"enter the five number.."<<endl;
		
		for(i=0;i<5;i++)
		{
			cout<<i+1<<": ";
			cin>>t.a[i];
		}
		
		for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(t.a[i]<t.a[j])
				{
					temp=t.a[j];
					t.a[j]=t.a[i];
					t.a[i]=temp;
				}
					
			}
			cout<<"\ndecending:"<<t.a[i];
		}
			
	}


main()
{
	array obj;
	
	
	fun1(obj);
}
