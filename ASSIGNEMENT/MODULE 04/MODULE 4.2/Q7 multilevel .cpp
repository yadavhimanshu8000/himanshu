/*Assume that the test results of a batch of students are stored in three different 
*classes. Class Students are storing the roll number. Class Test stores the marks 
*obtained in two subjects and class result contains the total marks obtained in 
*the test. The class result can inherit the details of the marks obtained in the 
*test and roll number of students. (Multilevel Inheritance) */

#include<iostream>

using namespace std;

class student{												// create class student...
	protected:
		
		int a;			// data member..
		
		public:
		roll()			// member function..
		{
			cout<<"enter the roll number:";
			cin>>a;
			
		}
		
	
	
};

					// create second class test and inheritance first student..
class test:public student{									
	public:
		
		int m,e;					// data member..
		
		marks()											// member function..
		{
			cout<<endl<<"enter the maths marks:";
			cin>>a;
			
			cout<<endl<<"enter the english marks:";
			cin>>e;	
			
			
	
		}
		
	
};

				// create third class result and inheritance second class test..
class result:public test{										
	public:
		
		
		total()				// member function..
		{
			cout<<"\n------------------------------------------\n";
				
			cout<<endl<<"student roll no:"<<a<<endl;
			cout<<endl<<"subject maths marks:"<<m<<endl;
		    cout<<endl<<"subject english marks:"<<e<<endl;
			cout<<endl<<"total marks:"<<m+e<<endl;
		}
};



main()
{
	result obj;			// create obj..
	obj.roll();
	obj.marks();
	obj.total();
	
}
