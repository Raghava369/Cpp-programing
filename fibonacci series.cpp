#include<iostream>
using namespace std;
void fib(int n)
{
	int a=0,b=1,c;
	for(int i=1;i<=n;i++)
	{
		c=a+b;
		cout<<a<<" ";
		a=b;
		b=c;
	}
	return;
}
main()
{
	int n;
	cout<<"enter n:\n";
	cin>>n;
	fib(n);
}
