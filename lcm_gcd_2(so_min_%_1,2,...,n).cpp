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
		long long x=1;
		for(long long i=1;i<=n;i++)
		{
			x*=i/__gcd(x,i);//__gcd UCLN
		}
		cout<<x<<endl;
	}
	return 0;
}
