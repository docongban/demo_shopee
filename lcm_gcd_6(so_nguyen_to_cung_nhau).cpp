#include<bits/stdc++.h>
using namespace std;
bool So_nguyen_to_cung_nhau(long long a,long long b)
{
	if((a-b)%2!=0)
	{
		return false;
	}
	long long x=(a-b)/2;
	long long y=x+b;
	if(__gcd(x,y)==1)
	{
		return true;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		n=(n*(n+1))/2;
		if(So_nguyen_to_cung_nhau(n,m)) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
	return 0;
}

