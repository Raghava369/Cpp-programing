#include<bits/stdc++.h>
using namespace std;
int UpdateBit(int n,int pos,int value)
	{
		n=(n&(~(1<<pos)));
		return(n|(value<<pos));
	}
main()
{
	int n,pos,value;
	cin>>n>>pos>>value;
	cout<<UpdateBit(n,pos,value);
}
	
