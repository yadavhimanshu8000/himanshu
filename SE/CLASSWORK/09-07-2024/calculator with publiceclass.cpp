#include"iostream"

using namespace std;

 class myclass{
 	public:						//public class...
 		
 		int a,b;
 		
 		fun1()						//function name
 		{
 			cout<<"enter the number A:\n";
 			cin>>a;
 			cout<<"enter the number B:\n";
 			cin>>b;
 			
 			cout<<"\naddition:"<<a+b << endl;
		 }
		 
		 fun2()									// function 
		 {
		 	cout<<endl<<"enter the number A:\n";
 			cin>>a;
 			cout<<"enter the number B:\n";
 			cin>>b;
 			
 			cout<<"	\nsubstraction:"<<a-b<<endl;		
		 }
		 
		 fun3()										// function 				
		 {
		 	cout<<endl<<"enter the number A:\n";
 			cin>>a;
 			cout<<"enter the number B:\n";
 			cin>>b;
 			
 			cout<<"\nmultiple:"<<a*b<<endl;
		 }
		 
		 fun4()										// function 
		 {
		 	cout<<endl<<"enter the number A:\n";
 			cin>>a;
 			cout<<"enter the number B:\n";
 			cin>>b;
 			
 			cout<<"\ndivision:"<<(float)a/b<<endl;
		 }
 };

main()
{
	myclass obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
}
