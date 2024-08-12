#include<iostream>

using namespace std;

class papa{
	protected:
			int a,b;
		papa()
		{
			cout<<"he is dad."<<endl;
		}
};

class secondpapa:public papa{
	public:
	
		fun2()
		{
			cout<<"enter the A:";
			cin>>a;
			
			cout<<"enter the B:";
			cin>>b;
		}
		
};

	class childdisplay: public papa{
		public:
			
			fun3()
			{
				cout<<"A:  "<<a<<endl;
				cout<<"B:  "<<b<<endl;
			}
	};

main()
{
	 secondpapa obj;
	 obj.fun2();
	 
	 childdisplay obj1;
	 obj1.fun3();
	 
}
