/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance) */

#include<iostream>

using namespace std;

class student{												// first class student...
	protected:
		
		int a;
		
		public:
		roll()
		{
			cout<<"enter the roll number:";
			cin>>a;
			
		}
		
	
	
};

class test:public student{										// second class test and inheritance first...
	public:
		
		int a,b;
		
		marks()
		{
			cout<<endl<<"enter the maths marks:";
			cin>>a;
			
			cout<<endl<<"enter the english marks:";
			cin>>b;	
			
			
	
		}
		
	;
};

class result:public test{										// third class result and inheritance sencond class..
	public:
		
		
		total()
		{
			cout<<"\n------------------------------------------\n";
				
			cout<<endl<<"student roll no:"<<a<<endl;
			cout<<endl<<"subject maths marks:"<<a<<endl;
		    cout<<endl<<"subject english marks:"<<b<<endl;
			cout<<endl<<"total marks:"<<a+b<<endl;
		}
};



main()
{
	result obj;
	obj.roll();
	obj.marks();
	obj.total();
	
}
