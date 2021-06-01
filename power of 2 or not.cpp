 #include<iostream>
 using namespace std;
 bool ispowerof2(int n)
 {
 	return (n&(n-1)==0)?1:0;
 }
 int main()
 {
 	int n;
 	cout<<"enter n";
 	cin>>n;
 	if(ispowerof2(n))
 	{
 		cout<<n<<" is power of 2";
	 }
	 else
	 {
	 	cout<<n<<" is not power of 2";
	 }
 }
