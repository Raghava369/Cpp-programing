#include<iostream>
using namespace std;
void InsertionSort(int a[],int n)
{
  register int i,j;
		for(i=1;i<n;i++)
		{
			int temp=a[i];
			j=i-1;
			while(a[j]>temp&&j>=0)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
			}	
}
main(){
int n;
cin>>n;
int arr[n];
for(register int i=0;i<n;i++)
cin>>arr[i];
InsertionSort(arr,n);
for(register int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}
