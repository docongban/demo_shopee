#include<bits/stdc++.h>
using namespace std;
bool Kiem_tra(long long n)
{
	if(n<2)
	{
		return false;
	}
	for(long long i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
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
		long long x=0;
		for(int i=2;i<20;i++)
		{
			if(Kiem_tra(i)&&Kiem_tra(pow(2,i)-1))
			{
				if(pow(2,2*i)-pow(2,i)==2*n)
				{
					cout<<"1";
					x=1;
					break;
				}
			}
		}
		if(!x)
		{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}

