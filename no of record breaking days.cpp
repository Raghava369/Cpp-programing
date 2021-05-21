#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
for(register int i=0;i<n;i++)
{
	cin>>a[i];
}
int max=0;
int rbd=0;
if(n==1)
{
	cout<<"1";
	return 0;
}
a[n]=-1;
for(register int i=0;i<n;i++)
{
	if(a[i]>max&&a[i]>a[i+1])
	rbd++;
	if(max<a[i])
	max=a[i];
}
cout<<rbd<<endl;
return 0;
}
