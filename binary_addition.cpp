#include<bits/stdc++.h>
using namespace std;
string binaryaddition(string a,string b)
{
    string result;
    int carry=0;
    int i=a.length()-1;
    int j=b.length()-1;
    while(i>=0||j>=0)
    {
        int sum=carry;
        if(i>=0)
        sum=sum+a[i--] - '0';
        if(j>=0)
        sum=sum+b[j--]-'0';
        carry=sum>1?1:0;
        result=result + to_string(sum%2);
    }
    if(carry)
    result=result +to_string(carry);
    reverse(result.begin(), result.end());
     return result;
}
int main()
{
    string a,b;
    cin>>a>>b;
   cout<<binaryaddition(a,b);
   return 0;
}