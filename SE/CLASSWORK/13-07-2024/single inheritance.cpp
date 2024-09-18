/*inheritance :
	
	when one class derived the properties into another class it is called inheritance.
	
	there are five type .....
	
	single 
	multi level
	multiple
	hierarchi
	hybrid*/
	
	
	// single inheritance.... program.
	
#include<iostream>

using namespace std;

class a
{
	public:
		
		fun1()
		{
			cout<<"this is parent class..."<<endl;
		}
		
		
};
	class b:public a{
		
		public:
			
			fun2()
			{
				cout<<"this is child class..."<<endl;
			}
			
			
};



main()
{
	b obj;
	obj.fun1();
	obj.fun2();
	
}
