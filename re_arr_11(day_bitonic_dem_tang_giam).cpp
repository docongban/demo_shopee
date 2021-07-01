#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int n)
{
	int tam1[100];
	for(int i=0;i<n;i++) tam1[i]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j]&&tam1[i]<tam1[j]+1)
			{
				tam1[i]=tam1[j]+1;
			}
		}
	}
	int tam2[100];
	for(int i=0;i<n;i++) tam2[i]=1;
	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-1;j>i;j--)
		{
			if(arr[i]>arr[j]&&tam2[i]<tam2[j]+1)
			{
				tam2[i]=tam2[j]+1;
			}
		}
	}
	int max=tam1[0]+tam2[0]-1;
	for(int i=0;i<n;i++)
	{
		if(max<tam1[i]+tam2[i]-1)
		{
			max=tam1[i]+tam2[i]-1;
		}
	}
	cout<<max;
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
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

