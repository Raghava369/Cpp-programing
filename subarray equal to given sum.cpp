#include<iostream>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=sum+a[j];
			if(sum==s)
			{
				cout<<i+1<<j+1;
				return 0;
			}
		}
		sum=0;
	}
	return 0;
}
