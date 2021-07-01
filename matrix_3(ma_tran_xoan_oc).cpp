#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int brr[100000];
void Nhap_mang(int arr[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
}
void Xuat_mang(int arr[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
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
		Nhap_mang(arr,n,m);
		int dem=0;
		int b=0;
		while(b<=n/2&&b<=m/2)
		{
			for(int i=b;i<m-b&&dem++<m*n;i++)
			{
				cout<<arr[b][i]<<" ";
			}
			for(int i=b+1;i<n-b&&dem++<m*n;i++)
			{
				cout<<arr[i][m-b-1]<<" ";
			}
			for(int i=m-b-2;i>=b&&dem++<m*n;i--)
			{
				cout<<arr[n-b-1][i]<<" ";
			}
			for(int i=n-b-2;i>b&&dem++<m*n;i--)
			{
				cout<<arr[i][b]<<" ";
			}
			b++;
		}
		cout<<endl;
	}
	return 0;
}

