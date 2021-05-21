#include<iostream>
using namespace std;
main()
{
   int n,sum=0;
   cout<<"enter n";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
   	if(i%2==0)
   	sum=sum+i;
   else
   	continue;
   }
   cout<<sum;
}
