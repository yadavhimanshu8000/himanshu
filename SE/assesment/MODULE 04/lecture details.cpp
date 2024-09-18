/*Define a class to represent lecture details. Include the following members and the 
*program should handle at least details of 5 lecturers.
 
	Data members:
	a) Name of the lecturer
	b) Name of the subject
	c) Name of course
	d) Number of lecturers



	Data functions: 
	a) To assign initial values 
	b) To add a lecture details 
	c) To display name and lecture details*/

#include<iostream>
using namespace std;

class lecturedetails{
	
	private:
						// DATA MEMBER.
		string lecturerName;
		string subjectName;
		string courseName;
		int   lecturersNumber;
		
						//MEMBER FUNCTION.
		public:				//constructor To assign initial values 
			Lecturedetails(string lecturer="", string subject="", string course="", int lecturers=0)
		{
			lecturerName = lecturer;
			subjectName = subject;
			courseName = course;
			lecturersNumber = lecturers;
		}
								//function for add a lecture details 
		addlecturedetails(string lecturer, string subject, string course ,int lecturers )
		{
		 lecturerName=lecturer;
		 subjectName=subject;
		 courseName=course;
		 lecturersNumber=lecturers;
			
		}
								//function for display name and lecture details
		displaylecturedetails()
		{
			cout<<endl<<"LECTURER NAME:"<<lecturerName<<endl;		
			cout<<endl<<"SUBJECT NAME:"<<subjectName<<endl;
			cout<<endl<<"COURSE NAME:"<<courseName<<endl;
			cout<<endl<<"NUMBER OF LECTURERS:"<<lecturersNumber<<endl;				
		}
		
		
};
		

main()
{					// USING ARRAY.
	lecturedetails obj[6];				
	
	cout<<"\n-------------------------------------------------------\n"<<endl;


	
	obj[0].addlecturedetails("JAY SIR","JAVA","IT",17);
	obj[1].addlecturedetails("PRASHANT SIR","PYTHON","IT",20);
	obj[2].addlecturedetails("KHUSHBOO MAM","MANCHINE LEARNING","IT",10);
	obj[3].addlecturedetails("SAURABH SIR","DESIGN","IT",21);
	obj[4].addlecturedetails("RAJESH SIR","PHP","IT",07);
	obj[5].addlecturedetails("VISHAL SIR","C++","IT",10);
	
				// USING LOOP FOR DISPLAYLECTUREDETAILS AND LECTURER NO:
	for(int i=0;i<6;i++)
	{
		cout<<"Lecturer:"<<i+1<<endl;
		obj[i].displaylecturedetails();
		
		cout<<"\n-------------------------------------------------------\n"<<endl;
	}
	
	
	
	
	
}
