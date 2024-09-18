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
			cout<<"car have four tyre."<<endl;
		}
};

class bike:public wheel{
	public:
		
		tyre()
		{
			cout<<"bike have two tyre."<<endl;
		}
};

class truck:public wheel{
	public:
		
		tyre()
		{
			cout<<"truck have many tyre."<<endl;
		}
};

main()
{
	car obj;
	obj.tyre();
	bike obj1;
	obj1.tyre();
	truck obj2;
	obj2.tyre();
}
