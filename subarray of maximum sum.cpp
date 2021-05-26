#include<iostream>
#include<climits>
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
int maxsum=INT_MIN;
for(register int i=0;i<n;i++)
{
	sum=sum+a[i];
	if(a[i]<0)
	sum=0;
	maxsum=max(maxsum,sum);
}
cout<<maxsum<<endl;
}
