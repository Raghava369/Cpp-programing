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
	cout<<"the matrix is\n";
	for(register int i=0;i<n;i++)
	{
		for(register int j=0;j<m;j++)
		{
			cout<<arr[i][j];
		}
		cout<<"\ n";
	}
}
