#include<iostream>
using namespace std;
main()
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(register int i=0;i<m;i++)
	{
		for(register int j=0;j<n;j++)
	    cin>>arr[i][j];
	}
	int target;
	cin>>target;
	bool found=false;
	int r=0,c=n-1;
	while(r<m and c>=0)
	{
		if(arr[r][c]==target)
		found=true;
		if(arr[r][c]>target)
		c--;
		else if(arr[r][c]<target)
		r++;
	}
	if(found)
	{
		cout<<"element found";
	}
	else
	cout<<" element not found";
}
