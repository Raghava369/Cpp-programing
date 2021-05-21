#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
for(register int i=0;i<n;i++)
{
	cin>>a[i];
}
int c=0,c1=0;
int cd=a[0]-a[1];
for(register int i=0;i<n;i++)
{
	c1++;
	if(a[i]-a[i+1]!=cd)
	{
		cd=a[i]-a[i+1];
       	if(c1>c) 
       {
          c=c1;
        }
        c1=1;
	}
}
cout<<c<<endl;
}
