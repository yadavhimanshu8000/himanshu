#include<iostream> 
using namespace std;

class A{
	public:
		
		headline()
		{
			cout<<"our school:";
		}
};

	class B:public A{
		public:
			
			string name;
				int roll_no;
			student()
			{
				
			
				cout<<endl<<"enter the name:";
				cin>>name;
			
				cout<<endl<<"enter the roll no:";
				cin>>roll_no;
			}
			
			
	};
	
	class C:public B{
		public:
			
			display()
			{
			cout<<"student name:"<<name<<endl;
			cout<<"roll no:"<<roll_no<<endl;
			cout<<"**marksheet**"<<endl;
			cout<<"maths  :80/100"<<endl;
			cout<<"science   :90/100"<<endl;
			}
			
			
	};

int main()
{
	C obj;
	obj.headline();
	obj.student();
	obj.display();
}
