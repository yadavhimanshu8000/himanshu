/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (hierarchy Inheritance)*/


#include<iostream>

using namespace std;

class person{			// create class..
	protected:
		
		string name;
		int age;
		
		public:
		fun1()				// member function...
		{
			
			cout<<"enter the name:";
			cin>>name;
			
			cout<<endl<<"enter the age:";
			cin>>age;
		}
};

					// create second class and inheritance first class...
	class student:public person{
		private:
			
			float percentage;				// data member...
			
			public:
			fun2()				// member function...
			{
				cout<<endl<<"enter the percenatge:";
				cin>>percentage;
			}
			
			fun3()				// member function...
			{
				cout<<"\n---------------------------------------------\n";
				cout<<endl<<"****student data****"<<endl;
				cout<<endl<<"student name:"<<name<<endl;
				cout<<endl<<"student age:"<<age<<endl;
				cout<<endl<<"student percentage:"<<percentage<<endl;
				
				cout<<"\n-------------------------------------------------\n";
			}
	};
	
	
					// create third class and inheritance the first class...
	class teacher:public person{			
		private:
			
			int salary;				// data member..
			
			public:
				fun4()				// member function...
				{
					
					cout<<endl<<"enter the salary:";
					cin>>salary;
				}
				
				fun5()			// member function...
				{
					cout<<"\n-------------------------------------------\n";
					cout<<endl<<"****teacher data****"<<endl;
					cout<<endl<<"teacher name:"<<name<<endl;
				    cout<<endl<<"teacher age:"<<age<<endl;
					cout<<endl<<"teacher salary:"<<salary<<endl;
				}
	};

main()
{
	student obj;					// create obj
	obj.fun1();
	obj.fun2();
	obj.fun3();
	teacher obj1;					// create second obj1...
	obj1.fun1();
	obj1.fun4();
	obj1.fun5();
}


