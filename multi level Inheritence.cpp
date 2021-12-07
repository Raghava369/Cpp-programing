#include<iostream>
using namespace std;
class A
{
	protected:
		string name;
		int roll;
};
class B:public A
{
	protected:
		int os,oops,m3,se,mfcs;
};
class C:public B
{
	protected:
		int avg,tot;
	public:
		void get_details()
		{
			cout<<"enter name and r.no"<<endl;
			cin>>name>>roll;
			cout<<"enter marks of 5 subjects"<<endl;
			cin>>os>>oops>>m3>>se>>mfcs;
			tot=os+oops+m3+se+mfcs;
			avg=tot/5;
			cout<<"total : "<<tot<<endl;
			cout<<"avg   : "<<avg<<endl;
		}
};

main()
{
	C o1;
	o1.get_details();
}
