#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
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
int Tong_hang(int arr[100][100],int i,int b)
{
	int tong=0;
	for(int j=0;j<b;j++)
	{
		tong+=arr[i][j];
	}
	return tong;
}
int Tong_cot(int arr[100][100],int i,int a)
{
	int tong=0;
	for(int j=0;j<a;j++)
	{
		tong+=arr[j][i];
	}
	return tong;
}
int Max_hang(int arr[100][100],int n)
{
	int Max=Tong_hang(arr,0,n);
	for(int i=0;i<n;i++)
	{
		int t=Tong_hang(arr,i,n);
		if(Max<t)
		{
			Max=t;
		}
	}
	return Max;
}
int Max_cot(int arr[100][100],int n)
{
	int Max=Tong_cot(arr,0,n);
	for(int i=0;i<n;i++)
	{
		int t=Tong_cot(arr,i,n);
		if(Max<t)
		{
			Max=t;
		}
	}
	return Max;
}
void Tim(int arr[100][100],int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			tong+=arr[i][j];
		}
	}
	int x=max(Max_hang(arr,n),Max_cot(arr,n));
	cout<<x*n-tong;
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
		Tim(arr,n);
		cout<<endl;
	}
	return 0;
}

