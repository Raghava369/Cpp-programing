#include<iostream>
#include<climits>
using namespace std;
main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
	cin>>arr[i];
int maxno=INT_MIN;
int minno=INT_MAX;
for(int i=0;i<n;i++)
{
	maxno=max(maxno,arr[i]);
	minno=min(minno,arr[i]);
}
cout<<minno<<" "<<maxno;
}
