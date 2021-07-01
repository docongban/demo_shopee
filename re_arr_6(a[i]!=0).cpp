#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Nhap_mang(int arr[],int n)
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
void Xu_li(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]!=0)
		{
			if(arr[i]==arr[i+1])
			{
				arr[i]=arr[i]*2;
				arr[i+1]=0;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			cout<<arr[i]<<" ";
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			cout<<0<<" ";
		}
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
		Nhap_mang(arr,n);
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

