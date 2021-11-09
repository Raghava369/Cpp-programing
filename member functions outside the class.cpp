#include<iostream>
using namespace std;
class A
{
	private:
		int val;
	public:
		void int_val(int v);
		void print_val();
};
void A::int_val(int v)
{
	val=v;
}
void A::print_val()
{
	cout<<val<<endl;
}
main()
{
 A obj1;
 obj1.int_val(3000);
 obj1.print_val();
}
