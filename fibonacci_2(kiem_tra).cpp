#include<bits/stdc++.h>
using namespace std;
bool Kiem_tra(long long n)
{
	long long n1=0,n2=1,n3=1;
	if(n<0)
	{
		return false;
	}
	else if(n<4)
	{
		return true;
	}
	while(n3<n)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	if(n3==n)
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
		long long n;
		cin>>n;
		if(Kiem_tra(n)==true)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}
