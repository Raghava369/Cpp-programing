#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int n,rev=0;
	cin>>n;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	cout<<"reverse of a mumber:  ";
	cout<<rev;
}
