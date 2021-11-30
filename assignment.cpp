#include<iostream>
using namespace std;
class assign
{
	private:
		int a;
	public:
		void get_data()
		{
			cout<<"enter a "<<endl;
			cin>>a;
		}
		void operator =(assign o3)
		{
			a=o3.a;
		}
		void display()
		{
			cout<<a<<endl;
		}
};
main()
{
	assign o1,o2;
	o1.get_data();
	o2=o1;
	o2.display();
}




