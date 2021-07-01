#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
void Nhap_mang(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Test(long long arr[],long long n,long long k)
{
	long long t=0;
	for(long long i=0;i<n;i++)
	{
		if(arr[i]<=k)
		{
			t++;
		}
	}
	long long tam=0,x=0;
	for(long long i=0;i<t;i++)
	{
		if(arr[i]<=k)
		{
			tam++;
		}
		x=tam;
	}
	for(long long i=t;i<n;i++)
	{
		if(arr[i]>k&&arr[i-t]<=k)
		{
			tam--;
		}
		if(arr[i]<=k&&arr[i-t]>k)
		{
			tam++;
		}
		x=max(x,tam);
	}
	cout<<t-x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		Nhap_mang(arr,n);
		Test(arr,n,k);
		cout<<endl;
	}
	return 0;
}

