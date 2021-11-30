#include<iostream>
using namespace std;
class equality
{
	private:
		int a;
	public:
		void get_data()
		{
			cout<<"enter a "<<endl;
			cin>>a;
		}
		void operator ==(equality o3)
		{
			if(a==o3.a)
			{
				cout<<"equal"<<endl;
			}
			else
			{
				cout<<"not equal"<<endl;
			}
		
		}
};
main()
{
	equality o1,o2;
	o1.get_data();
	o2.get_data();
	o1==o2;
}




