#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	char arr[n];
	cin>>arr;
	cout<<arr;
	cout<<"\n";
	int i=0;
	while(arr[i]!='\0')
	{
		cout<<arr[i];
		i++;
	}
}
