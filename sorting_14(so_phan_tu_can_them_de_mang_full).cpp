#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int brr[100000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xoa(int arr[],int &n,int x)
{
	for(int i=x+1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	n--;
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
		int max=arr[0];
		for(int i=0;i<n;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
		}
		int min=arr[0];
		for(int i=0;i<n;i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
		int x=0;
		for(int i=min;i<=max;i++)
		{
			brr[x++]=i;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					Xoa(arr,n,j);
					j--;
				}
			}
		}
		int dem=0;
		for(int i=0;i<x;i++)
		{
			dem++;
		}
		cout<<dem-n<<endl;
	}
	return 0;
}

