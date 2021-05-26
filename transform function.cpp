#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::toupper);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout<<s<<endl;
}
