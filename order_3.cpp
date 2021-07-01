#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int brr[100000];
void Nhap_mang(int arr[100][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
}
void Sap_xep(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
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
		int n,k;
		cin>>n>>k;
		Nhap_mang(arr,n);
		int x=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				brr[x++]=arr[i][j];
			}
		}
		Sap_xep(brr,x);
		for(int i=0;i<x;i++)
		{
			if(k==i)
			{
				cout<<brr[i-1];
			}
		}
		cout<<endl;
	}
	return 0;
}

