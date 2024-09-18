#include<iostream>

using namespace std;

class grandpa
{
	
	public:
		
		home()
		{
			cout<<"ghar mera hai"<<endl;
		}
	
};

class papa :public grandpa
{
	public:
		
		car()
		{
			cout<<"car meri hai"<<endl;
		}
};

class mai:public papa
{
	public:
		
		wife()
		{
			cout<<"wife meri hai";
		}
	
};




 main()


{
	mai obj;
	obj.home();
	obj.car();
	obj.wife();
	
	
}
