#include<iostream>
using namespace std;
void BubbleSort(int a[],int n)
{

		for(register int i=n-1;i>=0;i--)
	{
		int max=i;
		for(register int j=i-1;j>=0;j--)
		{
			if(a[max]<a[j])
			max=j;
		}
		if(max!=i)
		{
			a[i]=a[i]+a[max];
			a[max]=a[i]-a[max];
			a[i]=a[i]-a[max];
		}
	}
	
}
main(){
int n;
cin>>n;
int arr[n];
for(register int i=0;i<n;i++)
cin>>arr[i];
BubbleSort(arr,n);
for(register int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}
