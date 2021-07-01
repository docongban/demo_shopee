#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long b,p;
		cin>>b>>p;
		long long dem=0;
		long long t=b/p;
		for(long long i=1;i<p;i++)
		{
			if(i*i%p==1)
			{
				long long x=i+p*t;
				if(x>b)
				{
					x-=p;
				}
				dem+=(x-i)/p+1;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

