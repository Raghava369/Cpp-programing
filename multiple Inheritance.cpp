#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
};
class B
{
	protected:
		int c,d;
};
class C:public B,public A
{
	private:
		int tot;
		float avg;
	public:
		void get_details_calculate()
		{
			cout<<"enter a,b,c,d"<<endl;
			cin>>a>>b>>c>>d;
			tot=a+b+c+d;
			avg=tot/4.0;
			cout<<"total    : "<<tot<<endl;
			cout<<"average  : "<<avg<<endl;
		}
};

main()
{
	C o1;
	o1.get_details_calculate();
}
