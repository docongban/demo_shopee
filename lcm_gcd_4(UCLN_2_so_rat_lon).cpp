#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a;
		cin>>a>>str;
		long long b=0;
		for(int i=0;i<str.size();i++)
		{
			b=b*10+str[i]-48;
			b%=a;
		}
		cout<<__gcd(a,b)<<endl;
	}
	return 0;
}

