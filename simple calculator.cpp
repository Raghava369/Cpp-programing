#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"enter a , b\n";
	cin>>a>>b;
	char op;
	cout<<"enter opperation";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<a+b;
			break;
			case '-':
			cout<<a-b;
			break;
			case '*':
			cout<<a*b;
			break;
			case '/':
			cout<<a/b;
			break;
			case '%':
			cout<<a%b;
			break;
			default:
				cout<<"invalid input";
				break;
	}
}
