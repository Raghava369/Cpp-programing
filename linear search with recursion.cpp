#include<iostream>
using namespace std;
void recursive(int a[],int n,int target)
{
	int flag;
	if(a[n-1]==target)
	{
	cout<<"element found at index "<<n-1<<"\n";
	flag=1;
    }  
   else if(n-1==0&&flag!=1){
   	cout<<"element not found";
   }
   if(n-1>0)
   recursive(a,n-1,target);	
}
void non_recursive(int a[],int n,int target)
{
	int flag;
	while(n>=0)
	{
	if(a[n-1]==target)
	{
	cout<<"element found at index"<<n-1<<"\n";
	flag=1;
    }
	else if(n==0&&flag==0)
	cout<<"element not found";
	n--;
    }
}
main()
{
	int n;
	cout<<"enter number of elements";
	cin>>n;
	int a[n];
	cout<<"enter elements into array"<<"\n";
	for(register int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cout<<"enter target"<<"\n";
	cin>>target;
	cout<<"1->recursive method"<<"\n";
	cout<<"2->non recursive method"<<"\n";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				recursive(a,n,target);
				break;
			}
		case 2:
			{
			   non_recursive(a,n,target);
			   break;	
			}
		default:
		{
			cout<<"not valid";
			break;
		}	
			
	}
	
}
