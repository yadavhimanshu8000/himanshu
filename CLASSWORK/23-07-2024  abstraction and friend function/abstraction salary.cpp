#include<iostream>

using namespace std;


class employer{
	public:
		virtual salary()=0;
	
};

class lucky:public employer{
	public:
		salary()
		{
			cout<<"lucky got 2000"<<endl;
		}
};

class himanshu:public employer{
	public:
		salary()
		{
			cout<<"himanshu got 1000"<<endl;
		}
	
};

class vishal:public employer{
	public:
		salary()
		{
			cout<<"vishal got 100"<<endl;
		}
};

main()
{
	lucky obj;
	obj.salary();
	himanshu obj1;
	obj1.salary();
	vishal obj2;
	obj2.salary();
}
