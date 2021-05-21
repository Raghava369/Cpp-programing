#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
	int x=1,ans=0;
	while(n!=0)
	{
	 ans=ans + x*n%10;
	 x=x*2;
	 n=n/10;
	}
	return ans;
}
main()
{
	int n;
	cin>>n;
	cout<<binaryToDecimal(n);
}
