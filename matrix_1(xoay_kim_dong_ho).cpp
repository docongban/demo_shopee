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
		int b=0,dem;
		while(b<=n/2&&b<=m/2)
		{
			vector<int> v;
			for(int i=b;i<m-b;i++)
			{
				v.push_back(arr[b][i]);
			}
			for(int i=b+1;i<n-b;i++)
			{
				v.push_back(arr[i][m-b-1]);
			}
			for(int i=m-b-2;i>=b;i--)
			{
				v.push_back(arr[n-b-1][i]);
			}
			for(int i=n-b-2;i>b;i--)
			{
				v.push_back(arr[i][b]);
			}
			if(v.size()==0) break;
			int f=v.at(v.size()-1);
			v.insert(v.begin(),f);
			dem=-1;
			for(int i=b;i<m-b;i++)
			{
				brr[b][i]=v.at(++dem);
			}
			for(int i=b+1;i<n-b;i++)
			{
				brr[i][m-b-1]=v.at(++dem);
			}
			for(int i=m-b-2;i>=b;i--)
			{
				brr[n-b-1][i]=v.at(++dem);
			}
			for(int i=n-b-2;i>b;i--)
			{
				brr[i][b]=v.at(++dem);
			}
			b++;
		}
		Xuat_mang(brr,n,m);
		cout<<endl;
	}
	return 0;
}
