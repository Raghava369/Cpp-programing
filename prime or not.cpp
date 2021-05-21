#include<iostream>
using namespace std;
main()
{
	int n,i;
	cout<<"enter n:\n";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		cout<<"not prime number";
		break;
        }
    
	}
	if(i==n)
	cout<<"prime number";
}
