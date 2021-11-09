#include<iostream>
using namespace std;
class employee
{
	private:
		string name,desigination;
		int salary,id;
	public:
		void read()
		{
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter id"<<endl;
			cin>>id;
			cout<<"enter desigination"<<endl;
			cin>>desigination;
		    cout<<"enter salary"<<endl;
		    cin>>salary;
		}
		void display()
		{
			cout<<"name         : "<<name<<endl;
			cout<<"id           : "<<id<<endl;
			cout<<"desigination : "<<desigination<<endl;
			cout<<"salary       : "<<salary<<endl;
		}
};
main()
{
	employee e1,e2;
	e1.read();
	e1.display();
	e2.read();
	e2.display();
}
