/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (hierarchy Inheritance)*/


#include<iostream>

using namespace std;

class person{
	protected:
		
		string name;
		int age;
		
		public:
		fun1()
		{
			
			cout<<"enter the name:";
			cin>>name;
			
			cout<<endl<<"enter the age:";
			cin>>age;
		}
};

	class student:public person{
		private:
			
			float percentage;
			
			public:
			fun2()
			{
				cout<<endl<<"enter the percenatge:";
				cin>>percentage;
			}
			
			fun3()
			{
				cout<<"\n---------------------------------------------\n";
				cout<<endl<<"****student data****"<<endl;
				cout<<endl<<"student name:"<<name<<endl;
				cout<<endl<<"student age:"<<age<<endl;
				cout<<endl<<"student percentage:"<<percentage<<endl;
				
				cout<<"\n-------------------------------------------------\n";
			}
	};
	
	class teacher:public person{
		private:
			
			int salary;
			
			public:
				fun4()
				{
					
					cout<<endl<<"enter the salary:";
					cin>>salary;
				}
				
				fun5()
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
	student obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	teacher obj1;
	obj1.fun1();
	obj1.fun4();
	obj1.fun5();
}


