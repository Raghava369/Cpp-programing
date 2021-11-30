#include<iostream>
using namespace std;
class incdec
{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"enter a and b"<<endl;
			cin>>a>>b;
		}
		void operator ++()
		{
			a++;
		}
		void operator --()
		{
			b--;
		}
		void display()
		{
			cout<<a<<" "<<b<<endl;
		}
};
main()
{
	incdec o1;
	o1.get_data();
	++o1;
	--o1;
	o1.display();
}




