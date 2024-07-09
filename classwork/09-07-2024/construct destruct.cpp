#include"iostream"

using namespace std;

class Hello{
	
	public:
	
	Hello()				//construtor
	{
		cout<<"\nwelcome to our world"<<endl;
	}
	
	
	prime()
{

	int a,i,c=0;
	
	cout<<"\nenter the number:";
	cin>>a;
	
	for(i=1;i<=a;i++)
	
{
	if(a%i==0)
	{
		c++;
	}
}
	if(c==2)
	{
		cout<<"\nprime number\n";
	}
	else 
	{
		cout<<"\nnot a prime number";
}
	}

   	~Hello()										//destructor
   	
	{
		cout<<"\nthanku not come again....";
	}
	

	
	
};

main()
{
	Hello obj;
	obj.prime();
}
