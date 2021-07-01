#include<bits/stdc++.h>
using namespace std;
long long arr[100000];
void Nhap(long long arr[],long long n)
{
	for(long long i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
}
long long Tim(long long arr[],long long n)
{
	long long x,y;
	for(long long i=0;i<n-1;i++)
	{
		if(arr[i]<=0||arr[i]>n)
		{
			continue;
		}
		x=arr[i];
		while(arr[x-1]!=x)
		{
			y=arr[x-1];
			arr[x-1]=x;
			x=y;
		}
		if(x<=0||x>n)
		{
			break;
		}
	}
	for(long long i=0;i<n-1;i++)
	{
		if(arr[i]!=i+1)
		{
			return i+1;
		}
	}
	return n+1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Nhap(arr,n);
		cout<<Tim(arr,n)<<endl;
	}
	return 0;
}

