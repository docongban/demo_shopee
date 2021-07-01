#include<bits/stdc++.h>
using namespace std;
bool Kiem_tra_so_nguyen_to(int n)
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
	for(int i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0&&n%(i+2)==0)
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
		int n;
		cin>>n;
		int x=0;
		for(int i=1;i<=n;i++)
		{
			if(__gcd(i,n)==1)
			{
				x++;
			}
		}
		if(Kiem_tra_so_nguyen_to(x)==true)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}

