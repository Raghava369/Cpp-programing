#include<bits/stdc++.h>
using namespace std;
	main()
	{
		string R;
		getline(cin,R);
		int freq[26];
		for(register int i=0;i<26;i++)
		freq[i]=0;
		
		for(register int i=0;i<R.size();i++)
		{
		freq[R[i]-'a']++;
	    }
	    for(register int i=0;i<26;i++)
	    cout<<freq[i]<<"\n";
}
