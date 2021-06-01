#include<iostream>
using namespace std;
void subsets(int arr[],int n)
{
	for(register int i=0;i<(1<<n);i++)
	{
		for(register int j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				cout<<arr[j]<<" ";
			}
		}
	   cout<<endl;
	}
}
int main()
{
	int arr[4]={1,2,3,4};
	cout<<(1<<4);
	subsets(arr,4);
	
	return 0;
}
