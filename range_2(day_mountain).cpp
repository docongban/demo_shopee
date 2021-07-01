#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int brr[10000];
int crr[10000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
bool Kiem_tra_tang(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			return false;
		}
	}
	return true;
}
bool Kiem_tra_giam(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			return false;
		}
	}
	return true;
}
bool Kiem_tra_day_mountain(int arr[],int n)
{
	int max=arr[0];
	int x=0;
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			x=i;
		}
	}
	int k=0;
	for(int i=x;i<n;i++)
	{
		brr[k++]=arr[i];
	}
	if(Kiem_tra_tang(arr,x)&&Kiem_tra_giam(brr,k))
	{
		return true;
	}
	return false;
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
		int a,b;
		cin>>a>>b;
		int x=0;
		for(int i=a;i<=b;i++)
		{
			crr[x++]=arr[i];
		}
		if(Kiem_tra_day_mountain(crr,x)==true)
		{
			cout<<"Yes";
		}
		else cout<<"No";
		cout<<endl;
	}
	return 0;
}

