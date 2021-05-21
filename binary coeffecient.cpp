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
	int n,r;
	cout<<"enter n r :\n";
	cin>>n>>r;
	cout<<fact(n)/(fact(n-r)*fact(r));
	
}
