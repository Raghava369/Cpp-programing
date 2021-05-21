#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int n,flag=0;
	cin>>n;
	for(register int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"not prime";
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"prime number";
	}
}
