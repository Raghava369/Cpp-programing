#include<iostream>
using namespace std;
class A
{
	private:
		void read()
		{
			int a;
			cout<<"enter a "<<endl;
			cin>>a;
			cout<<a;
		}
	public:
		void access()
		{
			read();
		}
	    
};
main()
{
	A obj1;
	obj1.access();
 
}
