#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="abc";
	string s2="abc";
	if(!s1.compare(s2))//if(s1.compare(s2)==0)
	cout<<"strings are equal";
	else
	cout<<"strings are not equal";
	return 0;
} 
