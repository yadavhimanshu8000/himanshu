/*Assume a class cricketer is declared. Declare a derived class batsman from 
*cricketer. Data member of batsman. Total runs, Average runs and best 
*performance. Member functions input data, calculate average runs, Display 
*data. (Single Inheritance) */

#include<iostream>

using namespace std;

class cricketer{									//create class...
	protected:
		
		string name;
	
		
		cricketer()						//using constructor...
		{
		cout<<"enter batsman name:";
		getline(cin,name);
		}
		
			~cricketer()							// using destructor...
		{
			cout<<"\n*THE END*"<<endl;
		}
		
		
};

				// create second class and inheritance cricketer class
	class batsman:public cricketer{				
			public:
				
				int match;
				int runs;
				int performance;
				int c;
				
				
				fun1(){										// member function...
					
				cout<<endl<<"enter the total match played:";
				cin>>match;
				
				cout<<endl<<"enter the total runs:";
				cin>>runs;
				
				cout<<endl<<"enter best performance:";
				cin>>performance;
			
		}
		
		average()										// member function...
		{
						// find average runs divide by match...
				c=runs/(float)match;		
		}
		
		display()							// member function...
		{
			cout<<"\n----------------------------------------------\n";
			cout<<endl<<"name:"<<name<<endl;
			cout<<endl<<"total match played:"<<match<<endl;
			cout<<endl<<"total runs:"<<runs<<endl;
			cout<<endl<<"average run:"<<c<<endl;
			cout<<endl<<"best runs score:"<<performance<<endl;
		}
		
				
		};

main()
{
	batsman obj;				// create obj...
	obj.fun1();
	obj.average();
	obj.display();
}
