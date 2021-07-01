#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a,long long b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,x,y;
		cin>>a>>x>>y;
		long long z=UCLN(x,y);
		for(int i=0;i<z;i++)
		{
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}

