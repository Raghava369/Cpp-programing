#include<bits/stdc++.h>
using namespace std;
int clearBit(int n,int pos)
	{
		return (n&(~(1<<pos)));
	}
main()
{
	int n,pos;
	cin>>n>>pos;
	cout<<clearBit(n,pos);
}
	
