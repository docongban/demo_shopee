#include<bits/stdc++.h>
using namespace std;
string str;
long long Modulo(string str,long long m)
{
	long long x=0;
	for(long long i=0;i<str.size();i++)
	{
		x=(x*10+str[i]-'0')%m;
	}
	return x;
}
long long Mu(long long a,long long n,long long k)
{
	long long t;
	if(n==1)
	{
		t=a;
	}
	else
	{
		t=Mu(a,n/2,k);
		t=(t*t)%k;
		if(n%2==1)
		{
			t=(t*a)%k;
		}
	}
	return t;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,x;
		cin>>str>>n>>m;
		x=Modulo(str,m);
		x=Mu(x,n,m);
		cout<<x<<endl;
	}
	return 0;
}
