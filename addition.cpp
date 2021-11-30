#include<iostream>
using namespace std;
class addition
{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"enter a and b"<<endl;
			cin>>a>>b;
		}
		void operator +(addition o3)
		{
			addition temp;
			temp.a=a+o3.a;
			temp.b=b+o3.b;
			cout<<temp.a<<" "<<temp.b<<endl;
		}
		void operator -(addition o3)
		{
			addition temp;
			temp.a=a-o3.a;
			temp.b=b-o3.b;
			cout<<temp.a<<"\n"<<temp.b<<endl;
		}
};
main()
{
	addition o1,o2;
	o1.get_data();
	o2.get_data();
	o1+o2;
	o1-o2;
}




