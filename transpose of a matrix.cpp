#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(register int i=0;i<n;i++)
	{
		for(register int j=0;j<n;j++)
	    cin>>arr[i][j];
	}
	for(register int i=0;i<n;i++)
	{
		for(register int j=i;j<n;j++)
		{
		  int temp=arr[i][j];
		  arr[i][j]=arr[j][i];
		  arr[j][i]=temp;
		}
	}
		for(register int i=0;i<n;i++)
	{
		for(register int j=0;j<n;j++)
		{
	    cout<<arr[i][j]<<" ";
	   }   
	    cout<<"\n";
	}
}
