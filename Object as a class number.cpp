#include<iostream>
using namespace std;
class student_details
{
	private:
		string name;
		float percentage;
	public:
		void get_details()
		{
			cout<<"enter name and percentage"<<endl;
			cin>>name>>percentage;
		}
		void display()
		{
			cout<<"name= "<<name<<endl;
			cout<<"percentage= "<<percentage<<endl;
		}
};
class roll_number
{
	private:
		student_details d1;
		int rollnumber;
	public:
		void get_members()
		{
			d1.get_details();
			cout<<"enter roll number"<<endl;
			cin>>rollnumber;
		}
		void display_details()
		{
			d1.display();
			cout<<"roll number= "<<rollnumber<<endl;
		}
 };
 main()
 {
 	roll_number r1;
 	r1.get_members();
 	r1.display_details();
 }
