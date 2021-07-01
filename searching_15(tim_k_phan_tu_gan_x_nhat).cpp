#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int brr[1000000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int n,int x,int k)
{
	int t=0;
	int x1=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<x)
		{
			brr[x1++]=arr[i];
		}
	}
	for(int i=x1-1;i>(x1-k/2-1);i--)
	{
		drr[t++]=brr[i];
	}
	int x2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>x)
		{
			crr[x2++]=arr[i];
		}
	}
	for(int i=0;i<k/2;i++)
	{
		drr[t++]=crr[i];
	}
	sort(drr,drr+t);
	for(int i=0;i<t;i++)
	{
		cout<<drr[i]<<" ";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Nhap(arr,n);
		int k,x;
		cin>>k>>x;
		Xu_li(arr,n,x,k);
		cout<<endl;
	}
	return 0;
}

