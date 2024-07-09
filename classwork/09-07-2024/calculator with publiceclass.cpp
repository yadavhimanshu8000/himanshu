#include"iostream"

using namespace std;

 class myclass{
 	public:						//public class...
 		
 		int a,b;
 		
 		fun1()						//name
 		{
 			cout<<"enter the number A:\n";
 			cin>>a;
 			cout<<"enter the number B:\n";
 			cin>>b;
 			
 			cout<<"\naddition:"<<a+b << endl;
		 }
		 
		 fun2()
		 {
		 	cout<<"enter the number A:\n";
 			cin>>a;
 			cout<<"enter the number B:\n";
 			cin>>b;
 			
 			cout<<"	\nsubstraction:"<<a-b<<endl;			//name
		 }
		 
		 fun3()														//name
		 {
		 	cout<<"enter the number A:\n";
 			cin>>a;
 			cout<<"enter the number B:\n";
 			cin>>b;
 			
 			cout<<"\nmultiple:"<<a*b<<endl;
		 }
 };













main()
{
	myclass obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
}
