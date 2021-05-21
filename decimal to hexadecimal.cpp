#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string DecimalToBinary(int n){
	int x=1;
	string ans="";
	while(x<=n)
     x=x*16;
     x=x/16;
     while(x>0)
     {
     	int lastdigit=n/x;
     	n=n-lastdigit*x;
     	x=x/2;
     	if(lastdigit<=9)
     	ans= ans + to_string(lastdigit);
     	else
		 {
     	char c='A'+lastdigit - 10;
     	ans.push_back(c);
        }
	 }
	return ans;
}
main()
{
	int n;
	cin>>n;
	cout<<DecimalToBinary(n);
}
