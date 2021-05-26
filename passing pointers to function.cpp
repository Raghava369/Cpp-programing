#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
main()
{
	int a=2,b=4;
	swap(&a,&b);//call by reference
	cout<<a<<" "<<b<<endl;
}
