#include<iostream>
using namespace std;
class addition_of_two_numbers
{
	private:
		int a,b;
	public:
		void input_func()
		{
			cout<<"enter a and b"<<endl;
			cin>>a>>b;
		}
		int adding()
		{
			return a+b;
		}
		void display(int c)
		{
			cout<<c;
		}
};
main()
{
	addition_of_two_numbers a1;
	a1.input_func();
	a1.display(a1.adding());
	
}
