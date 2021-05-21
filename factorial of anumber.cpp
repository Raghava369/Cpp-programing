#include<iostream>
using namespace std;
int fact(int n)
{
 int fact=1;
 for(register int i=2;i<=n;i++)
 {
 	fact=fact*i;
	 }	
	return fact;
}
main()
{
	int n;
	cout<<"enter n:\n";
	cin>>n;
	cout<<fact(n);
	
}
