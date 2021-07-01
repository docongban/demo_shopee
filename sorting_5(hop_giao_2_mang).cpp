#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int brr[100000];
int crr[100000];
int drr[100000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xuat(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void Xu_li(int arr[],int brr[],int crr[],int drr[],int n,int m)
{
	int x=n+m;
	for(int i=0;i<x;i++)
	{
		if(i<n) crr[i]=arr[i];
		else crr[i]=brr[i-n];
	}
	int t=0;
	for(int i=1;i<x;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(crr[i]==crr[j])
			{
				for(int k=i;k<x;k++)
				{
					crr[k]=crr[k+1];
				}
				x--;
				drr[t++]=crr[j];
			}
		}
	}
	sort(crr,crr+x);
	for(int i=0;i<x;i++) cout<<crr[i]<<" ";
	cout<<endl;
	sort(drr,drr+t);
	for(int i=0;i<t;i++) cout<<drr[i]<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		Nhap(arr,n);
		Nhap(brr,m);
		Xu_li(arr,brr,crr,drr,n,m);
		cout<<endl;
	}
	return 0;
}

