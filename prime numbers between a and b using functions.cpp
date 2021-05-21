#include<iostream>
#include<math.h>
using  namespace std;
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
	
}
main()
{
	int a,b,i;
	cout<<"enter a,b:\n";
	cin>>a>>b;
	for(i=a;i<=b;i++)
	{
	 if(isprime(i)){
	 	cout<<i<<endl;
	 }
}
	
}
