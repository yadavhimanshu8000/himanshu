/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) */

#include<iostream>

using namespace std;

class cricketer{
	protected:
		
		string name;
	
		
		cricketer()
		{
		cout<<"enter batsman name:";
		getline(cin,name);
		}
		
			~cricketer()
		{
			cout<<"\n*THE END*"<<endl;
		}
		
		
};

	class batsman:public cricketer{
			public:
				
				int match;
				int runs;
				int performance;
				int c;
				
				
				fun1(){
					
				cout<<endl<<"enter the total match played:";
				cin>>match;
				
				cout<<endl<<"enter the total runs:";
				cin>>runs;
				
				cout<<endl<<"enter best performance:";
				cin>>performance;
			
		}
		
		average()
		{
				c=runs/(float)match;
		}
		
		display()
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
	batsman obj;
	obj.fun1();
	obj.average();
	obj.display();
}
