#include<iostream>

using namespace std;

class array{
	public:
		
		int a[5];
					
			friend fun(array& t);
};

	fun(array& t)
	{
		
		int i,j,temp=0;
		cout<<"enter the 5 array:"<<endl;
		
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
			
			cout<<"decending order:"<<t.a[i]<<endl;
		}
	}
main()
{
	array obj;
	
	fun(obj);
}
