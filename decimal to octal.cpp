#include<bits/stdc++.h>
using namespace std;
int DecimalToOctal(int n){
	int x=1,ans=0;
	while(x<=n)
	x*=8;
	x/=8;
	while(x>0)
	{
	int	lastdigit=n/x;
	n=n-lastdigit*x;
	x/=8;
	ans=ans*10 + lastdigit;	
	}
	return ans;
}
main()
{
	int n;
	cin>>n;
	cout<<DecimalToOctal(n);
}
