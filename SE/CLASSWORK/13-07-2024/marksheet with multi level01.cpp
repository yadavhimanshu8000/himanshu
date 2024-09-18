#include<iostream>

using namespace std;

class school
{
	public:
		
		headline()
		{
			cout<<"welcome to our school.."<<endl;
		}
};

 class student:public school
 {
 	
 	public:
 		string name;
 		int roll;
 		
 		Name()
 		{
 			cout<<"enter the name:";
 			cin>>name;
 			
 			cout<<"enter the roll no:";
 			cin>>roll;
		 }
 };
 
 class marksheet:public student{
 	
 	public:
 		
 		marks()
 		{
 			cout<<endl<<endl<<"student name.."<<name;
 			cout<<endl<<"roll number.."<<roll;
 			cout<<endl<<"********marksheet********"<<endl;
 			cout<<"maths      : 80/100 "<<endl;
 			cout<<"science    : 70/100"<<endl;
 			cout<<"english    : 60/100"<<endl;
 			cout<<"total marks: 210/300"<<endl;
 			cout<<"percentage :66.67"<<endl;
 			
 			
 			
		 }
 };



int main()
{
	marksheet obj;
	obj.headline();
	obj.Name();
	obj.marks();
}

