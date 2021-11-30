#include<iostream>
using namespace std;
class unary
{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"enter a and b"<<endl;
			cin>>a>>b;
		}
		void operator +()
		{
			a=+a;
		}
		void operator -()
		{
			b=-b;
		}
		void display()
		{
			cout<<a<<" "<<b<<endl;
		}
};
main()
{
	unary o1;
	o1.get_data();
	+o1;
	-o1;
	o1.display();
}




