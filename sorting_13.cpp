#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int brr[1000000];
int crr[1000000];
void Nhap_mang(int arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Sap_xep(int arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		for(long long j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				long long temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		Nhap_mang(arr,n);
		Nhap_mang(brr,m);
		long long x=0;
		for(long long i=0;i<n;i++)
		{
			crr[x++]=arr[i];
		}
		for(long long i=0;i<m;i++)
		{
			crr[x++]=brr[i];
		}
		Sap_xep(crr,x);
		for(long long i=0;i<x;i++)
		{
			cout<<crr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

