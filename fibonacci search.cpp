#include<iostream>
#include<math.h>
using namespace std;
int fiba(int n)
{
	if(n==1)
	return 0;
	if(n==2)
	return 1;

 return fiba(n-1)+fiba(n-2);	
}
main()
{
	int n,a[100],key,offset=-1,fib1,fib2,fib,r,j,i;
	cout<<"enter size of array\n";
	cin>>n;
	cout<<"enter elemets";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	cout<<"enter key\n";
	cin>>key;
	for(i=1;;i++)
	{
		if(fiba(i)>n)
		{
			fib=fiba(i);
			fib1=fiba(i-1);
			fib2=fiba(i-2);
			r=i;
			break;
		}
	}
	for(i=r-3;fib2!=0;i--)
	{
	j=min((offset+fib2),n-1);
	 if(a[j]<key)
	 {
	 	fib=fib1;
	 	fib1=fib2;
	 	fib2=fiba(i);
	 	offset=j;
	 }
	 else if(a[j]>key)
	 {
	 	fib=fib2;
	 	fib1=fiba(i);
	 	fib2=fiba(i-1);
	 }
	 else if(a[j]==key)
	 {
	 	cout<<"element found at"<<j;
	 	break;
	 }
	
	}
	if(fib2==0)
	cout<<"element not found";
	
	
	
}
