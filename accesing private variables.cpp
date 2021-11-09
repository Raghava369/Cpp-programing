#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		void read()
		{
			cout<<"enter a "<<endl;
			cin>>a;
		}
	    int access()
	    {
	    	int c;
	    	c=a;
	    	return c;
		}
};
main()
{
 A obj;
 obj.read();
 int r;
 r=obj.access();
 cout<<r;
}
