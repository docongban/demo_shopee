#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long k;
		cin>>k;
		long long x=0;
		for(int i=1;i<=n;i++)
		{
			x+=i%k;
		}
		if(x==k)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}

