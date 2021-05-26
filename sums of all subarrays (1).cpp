#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
for(register int i=0;i<n;i++)
{
	cin>>a[i];
}
int sum=0;
for(register int i=0;i<n;i++)
{
	for(register int j=i;j<n;j++)
	{
		sum+=a[j];
		cout<<sum<<endl;
	}
	sum=0;
}
}
