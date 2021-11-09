#include<iostream>
using namespace std;
class area_of_rectangle
{
	private:
		int l,b;
	public:
		void read()
		{
			cout<<"enter l and b"<<endl;
			cin>>l>>b;
		}
		void display()
		{
			cout<<"area is"<<l*b <<endl;
		}
};
main()
{
	area_of_rectangle o1,o2,o3;
	o1.read();
	o1.display();
	o2.read();
	o2.display();
	o3.read();
	o3.display();
}
