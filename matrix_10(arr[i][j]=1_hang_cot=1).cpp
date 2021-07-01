#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int brr[100][100];
void Nhap_mang(int arr[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			brr[i][j]=arr[i][j];
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
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[i][j]==1)
				{
					for(int k=0;k<n;k++)
					{
						brr[k][j]=1;
					}
					for(int k=0;k<m;k++)
					{
						brr[i][k]=1;
					}
				}
			}
		}
		Xuat_mang(brr,n,m);
		cout<<endl;
	}
	return 0;
}

