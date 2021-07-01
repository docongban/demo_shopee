#include<bits/stdc++.h>
using namespace std;
long long Modulo(long long a,long long b,long long c)
{
	if(b==0)
	{
		return 0;
	}
	long long x=Modulo(a,b/2,c);
	if(b%2==1)
	{
		return ((a%c)+2*(x%c))%c;
	}
	else
	{
		return (2*(x%c))%c;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<Modulo(a,b,c)<<endl;
	}
	return 0;
}

