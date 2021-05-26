#include<bits/stdc++.h>
#include<climits>
using namespace std;
int k(int a[],int n)
{
	int maxsum=INT_MIN;
	int sum=0;
	for(register int i=0;i<n;i++)
	{
		sum+=a[i];
		if(a[i]<0)
		sum=0;
		maxsum=max(maxsum,sum);
	}
	return maxsum;
}
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
int wrapsum;
int nonwrapsum;
nonwrapsum=k(a,n);
int totalsum=0;
for(register int i=0;i<n;i++)
{
	totalsum+=a[i];
	a[i]=-a[i];
}
wrapsum=totalsum+k(a,n);
cout<<max(wrapsum,nonwrapsum);
}
