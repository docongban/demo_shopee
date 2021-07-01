#include<bits/stdc++.h>
using namespace std;
string str;
long long Mu(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	long long m=Mu(x,n/2);
	m*=m;
	m%=10;
	if(n%2==0)
	{
		return m;
	}
	return (m*x);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		long long dem=0;
		long long tong=0;
		for(long long i=str.size()-1;i>=0;i--)
		{
			dem++;
		}
		for(long long i=str.size()-1;i>=0;i--)
		{
			if(str[i]-'0'==1)
			{
				tong+=Mu(2,dem-1-i);
			}
		}
		long long k=tong%10;
		if(k==0||k==5)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		cout<<endl;
	}
	return 0;
}
