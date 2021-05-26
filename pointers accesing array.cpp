#include<iostream>
using namespace std;
main()
{
	int arr[3]={10,20,30};
	cout<<*arr<<endl;
	int* ptr=arr;
	for(register int i=0;i<3;i++)
	{
		cout<<*(ptr+i)<<endl;
	
	}
}
