#include<iostream>

using namespace std;

class A{
	public:
		
		string name;
		int id;
		
		getname(string name)
		{
			this-> name=name;
		}
		
		setname()
		{
			cout<<"name: "<<name<<endl;
		}
		
		getid(int id)
		{
			this-> id=id;
		}
		setid()
		{
			cout<<"number: "<<id<<endl;
		}
		
		~A()
		{
			cout<<"hello world."<<endl;
		}
};

main()
{
	A obj;
	obj.getname("sonata");
	obj.setname();
	obj.getid(7);
	obj.setid();
}
