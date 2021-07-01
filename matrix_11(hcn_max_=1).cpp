#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
void Nhap(int arr[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
}
void Xu_li(int arr[100][100],int n,int m)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[j][i]==0)
			{
				dem++;
			}
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
		int n,m;
		cin>>n>>m;
		Nhap(arr,n,m);
		Xu_li(arr,n,m);
		cout<<endl;
	}
	return 0;
}

