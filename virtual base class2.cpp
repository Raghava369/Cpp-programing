#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
};
class B:virtual public A
{
	protected:
		int c,d;
};
class C:virtual public A
{
	protected:
		int e,f;
};
class D:public B,public C
{
	private:
		int s,diff,m;
	public:
		void display()
		{
			cout<<"enter a,b,c,d,e,f"<<endl;
			cin>>a>>b>>c>>d>>e>>f;
			s=a+b;
			diff=c-d;
			m=e*f;
			cout<<s<<diff<<m;
			
		}
};
main()
{
	D o1;
	o1.display();
}
