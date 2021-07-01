#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long m;
		cin>>str;
		long long x=0;
		for(long long i=0;i<str.size();i++)
		{
			x=(x*10+str[i]-'0')%m;
		}
		cout<<x<<endl;
	}
	return 0;
}

