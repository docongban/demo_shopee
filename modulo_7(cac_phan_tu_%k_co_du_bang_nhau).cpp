#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Nhap(int arr[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int n)
{
	int dem=0;
	int Max=arr[1];
	for(int i=2;i<=n;i++)
	{
		if(Max<arr[i])
		{
			Max=arr[i];
		}
	}
	for(int i=1;i<=Max;i++)
	{
		int x=arr[1]%i;
		int test=1;
		for(int j=2;j<=n;j++)
		{
			if(arr[j]%i==x)
			{
				test++;
			}
		}
		if(test==n)
		{
			dem++;
		}
	}
	cout<<dem;
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

