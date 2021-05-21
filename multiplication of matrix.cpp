#include<iostream>
using namespace std;
main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1][n2],b[n2][n3],i,j,l;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		cin>>a[i][j];
	}
	for(j=0;j<n2;j++)
	{
		for(l=0;l<n3;l++)
		cin>>b[j][l];
    }  
	for(i=0;i<n1;i++)
	{
	for(l=0;l<n3;l++)
	{
		int sum=0;
		for(j=0;j<n2;j++) 
		{
			sum=sum+a[i][j]*b[j][l];
		}
		cout<<sum<<" ";
	}
	cout<<"\n";
    }

	
}
