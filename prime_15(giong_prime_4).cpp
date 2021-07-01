#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
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
		for(long long i=2;i<=100000;i++)
		{
			if(Kiem_tra(i)==true)
			{
				arr[x++]=i;
			}
		}
		for(long long i=1;i<=n;i++)
		{
			if(i==1)
			{
				cout<<"1"<<" ";
			}
			else if(i%2==0)
			{
				cout<<"2"<<" ";
			}
			else if(Kiem_tra(i)==true&&i!=2)
			{
				cout<<i<<" ";
			}
			else
			{
				for(long long j=0;j<x;j++)
				{
					if(i%arr[j]==0)
					{
						cout<<arr[j]<<" ";
						break;
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}

