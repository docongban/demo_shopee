#include<bits/stdc++.h>
using namespace std;
bool Kiem_tra(long long n)
{
	if(n<2)
	{
		return false;
	}
	if(n<=3)
	{
		return true;
	}
	if(n%2==0||n%3==0)
	{
		return false;
	}
	for(long long i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0||n%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		if(a>b)
		{
			long long temp=a;
			a=b;
			b=temp;
		}
		long long dem=0;
		for(long long i=a;i<=sqrt(b);i++)
		{
			if(Kiem_tra(i)==true)
			{
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

