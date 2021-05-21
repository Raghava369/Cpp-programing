#include<iostream>
using namespace std;
int sum(int n)
{
	int sum=n*(n+1)/2;
	return  sum;
}
main()
{
	int n;
	cin>>n;
	cout<<"sum of n natural numbers is"<<sum(n);
}
