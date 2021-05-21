#include<iostream>
using namespace std;
int fact(int n)
{
 int fact=1;
 for(register int i=2;i<=n;i++)
 {
 	fact=fact*i;
	 }	
	return fact;
}
main()
{
	int n;
	cout<<"enter n :\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	 for(int j=0;j<=i;j++)
	 {
	cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
    cout<<endl;
  }
	
}
