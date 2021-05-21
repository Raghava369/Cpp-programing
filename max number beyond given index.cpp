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
int max=a[0];
for(register int i=0;i<n;i++)
{
	if(max<a[i])
	max=a[i];
	cout<<max<<endl;
}
}
