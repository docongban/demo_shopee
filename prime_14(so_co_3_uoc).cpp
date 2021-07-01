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
		long long n;
		cin>>n;
		int x=0;
		for(long long i=1;i<=sqrt(n);i++)
		{
			if(Kiem_tra(i)==true)
			{
				x++;
			}
		}
		cout<<x<<endl;
	}
	return 0;
}

