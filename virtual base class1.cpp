#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
};
class B:virtual public A
{
	protected:
		int b;
};
class C:virtual public A
{
	protected:
		int c;
};
class D:public B,public C
{
	private:
		int d;
	public:
		void display()
		{
			cout<<"enter a,b,c,d"<<endl;
			cin>>a>>b>>c>>d;
			cout<<a<<b<<c<<d;
		}
};
main()
{
	D o1;
	o1.display();
}
