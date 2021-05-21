#include<iostream>
using namespace std;
bool PythogorianTriplet(int a,int b,int c)
{
	
	if(a>b)
	{
		if(a>c)
		a=a;
		else{
		a=a+c;
		c=a-c;
		a=a-c;
	    }
		
	}
	else
	{
		if(b>c){
		
		a=a+b;
		b=a-b;
		a=a-b;
		}
		else{
		a=a+c;
		c=a-c;
		a=a-c;
	    }
	}
	cout<<a<<b<<c;
	if(a*a==b*b+c*c)
	return true;
	else
	return false;
}
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(PythogorianTriplet(a,b,c))
		cout<<"pythogorian triplet";
		else
		cout<<"not a PT";
	
}
