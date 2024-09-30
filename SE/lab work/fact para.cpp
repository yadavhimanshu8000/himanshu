/*
#include<iostream>

using namespace std;

class hello{
	
	public:
		
		fun(int x)
		{
			int i,fact=1;
			
			for(i=1;i<=x;i++)
			{
				fact=fact*i;
			}
			cout<<"fat:"<<fact;
		}
		
		fun1(int y)
		{
			int i,c=0;
			
			for(i=1;i<=y;i++)
			{
				if(y%i==0){
					c++;
				}
				
			}
				if(c==2)
				{
					cout<<"number is prime";
				}
				
				else
				{
					cout<<"no is not prime.";
				}
		}
};

main()
{
	hello obj;
	obj.fun(5);
	obj.fun1(4);
}
*/

/*
#include<iostream>

using namespace std;

class a{
	
	public:
		
		fun1()
		{
			cout<<"hello.";
		}
};

class b: public a {
	
		public:
	
		fun2(){
			
				cout<<"world";
		}
		
};

main()
{
	b obj;
	obj.fun1();
	obj.fun2();
}

*/

/*
#include<iostream>

using namespace std;

class a{
	
	public:
		
		fun1()
		{
			
			
			cout<<"enter no:"<<endl;
			
		}
};

class b: public a{
	
	public:
		
		fun2()
		{
		
			
			cout<<"enter no2:"<<endl;
			
		}
};

class c: public b{
	
	public:
		
		
		fun3()
		{
			cout<<"addition:";
		}
};

main()
{
	
	c obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
}


*/
/*

#include<iostream>

using namespace std;

class hello{
	
	protected:
		
		int a,b;
		
		hello()
		{
			cout<<"this is construtor."<<endl;
		}
			
};

class B{
	
	public:
		
		fun1()
		{
			cout<<"helppp."<<endl;
		}
};

class c: public hello,public B{
	
	public:
		
		fun2()
		{
			cout<<"enter the no1:"<<endl;
			cin>>a;
			
			cout<<"enter the no2"<<endl;
			cin>>b;
			
			
			cout<<"A:"<<a<<endl<<"B:"<<b;
		}
};

main()
{
	c obj;
	obj.fun1();
	obj.fun2();
}


	*/


















