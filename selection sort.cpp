#include<iostream>
using namespace std;
void SelectionSort(int a[],int n)
{
	for(register int i=0;i<n;i++)
	{
		int min=i;
		for(register int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		if(min!=i)
		{
			a[i]=a[i]+a[min];
			a[min]=a[i]-a[min];
			a[i]=a[i]-a[min];
		}
	}
}
main(){
int n;
cin>>n;
int arr[n];
for(register int i=0;i<n;i++)
cin>>arr[i];
SelectionSort(arr,n);
for(register int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}
