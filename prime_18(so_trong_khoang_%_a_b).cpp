#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long m,n;
		cin>>m>>n;
		int a,b;
		cin>>a>>b;
		if(m>n)
		{
			long long temp=m;
			m=n;
			n=temp;
		}
		long long k=0;
		for(long long i=m;i<=n;i++)
		{
			if(i%a==0||i%b==0)
			{
				k++;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}

