#include<iostream>
using namespace std;
int divisible(int n,int a,int b)
{
  int c1=n/a;
  int c2=n/b;
  
  int c3=n/(a*b);
 
 return c1+c2-c3;	
}
main()
{
	int a,b,n;
	cin>>n>>a>>b;
	cout<<divisible(n,a,b);
}