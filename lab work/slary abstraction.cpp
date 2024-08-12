#include<iostream>

using namespace std;

class job{
	public:
		
		virtual salary()=0;
};

class lucky:public job{
	public:
		
		salary()
		{
			cout<<"lucky have 20000 salary"<<endl;
		}
};

class vishal:public job{
	public:
		
		salary()
		{
			cout<<"vishal have 100000 salary "<<endl;
		}
};

main()
{
	lucky obj;
	obj.salary();
	vishal obj1;
	obj1.salary();
}
