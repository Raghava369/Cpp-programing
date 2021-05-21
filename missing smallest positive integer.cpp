#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c=0,m=1;
	while(c!=m)
	{
		for(int j=0;j<n;j++)
		{
		 if(a[j]!=m)
		 	c++;
		}
		if(c==n) 
		{
		cout<<m;
		return 0;
		}
		else
		{
		m++;
		c=0;	
		}
	}
	return 0;
}
