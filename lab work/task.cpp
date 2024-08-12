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
			cout<<endl<<"hello world"<<endl;
		}
		
};

	class childdisplay: public papa{
		public:
			
			fun3()
			{
				cout<<endl<<"enter the A:";
				cin>>a;
			
				cout<<endl<<"enter the B:";
				cin>>b;
				
				cout<<endl<<"A:  "<<a<<endl;
				cout<<endl<<"B:  "<<b<<endl;
			}
	};

main()
{
	 secondpapa obj;
	 obj.fun2();
	 
	 childdisplay obj1;
	 obj1.fun3();
	 
}
