#include<iostream>
using namespace std;
main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(register int i=0;i<n;i++)
	{
		for(register int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int x;
	cin>>x;
	register int i;
	register int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]==x)
			cout<<"element found at"<<i<<" "<<j<<endl;
		}
		cout<<"\n";
	}
	if(i==n&&j==m)
	{
		cout<<"element not found";
	}
}
