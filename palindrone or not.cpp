#include<iostream>
using namespace std;
main()
{
	int n,i=0,flag=0;
	cin>>n;
	char arr[n+1];
	cin>>arr;
	for(i=0;i<n/2;i++)
	{
	 if(arr[i]!=arr[n-i-1])
	 {
	 	flag=1;
	 	break;
	 }
	}
	if(flag==1)
	cout<<"not a palindrone";
	else
	cout<<"palindrone";
	
	
}
