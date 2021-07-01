#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c,n;
		cin>>a>>b>>c>>n;
		long long sum=pow(10,n-1);
		long long b1=(a*b)/__gcd(a,b);
		long long b2=(b1*c)/__gcd(b1,c);
		if(b2>sum*10)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			if(sum%b2==0)
			{
				cout<<sum<<endl;
			}
			else
			{
				cout<<b2+sum-sum%b2<<endl;
			}
		}
	}
	return 0;
}

