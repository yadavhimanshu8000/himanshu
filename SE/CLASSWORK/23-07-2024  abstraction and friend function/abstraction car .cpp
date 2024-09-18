#include<iostream>

using namespace std;

class wheel{
	public:
		virtual tyre()=0;
		
};

class car:public wheel{
	public:
		tyre()
		{
			cout<<"total 4 wheel"<<endl;
		}
};

class truck:public wheel{
	public:
		tyre()
		{
			cout<<"total 12 wheel"<<endl;
			
		}
};

class bike:public wheel{
	public:
		tyre()
		{
			cout<<"total 2 wheels"<<endl;
		}
};



main()
{
	car obj;
	obj.tyre();
	truck obj1;
	obj1.tyre();
	bike obj2;
	obj2.tyre();
	
}
