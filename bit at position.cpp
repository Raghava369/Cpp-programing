#include<bits/stdc++.h>
using namespace std;
int getBit(int n,int pos)
	{
		return (n&(1<<pos)!=0)?1:0;
	}
main()
{
	int n,pos;
	cin>>n>>pos;
	cout<<getBit(n,pos);
}
	
