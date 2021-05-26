#include<iostream>
using namespace std;
main()
{
	int a=10;
	int* ptr;
	ptr=&a;
	cout<<*ptr<<endl;
	*ptr=20;
	cout<<a<<endl;
}
