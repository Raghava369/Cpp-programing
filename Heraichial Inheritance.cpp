#include<iostream>
using namespace std;
class data
{
	protected:
		int a,b;
	public:
		void get_data(){
			cout<<"enter a,b";
			cin>>a>>b;
	}
};
class add:protected data
{
	private:
		int addition;
	public:
		void cal_addition()
		{
			get_data();
			addition=a+b;
			cout<<"addition is "<<addition<<endl;
		}
};
class subtract:protected data 
{
	private:
		int subtraction;
	public:
		void cal_subtraction()
		{
			get_data();
			subtraction=a-b;
			cout<<"subtraction is "<<subtraction<<endl;
		}
};

main()
{
	add o1;
	o1.cal_addition();
	subtract o2;
	o2.cal_subtraction();
}
