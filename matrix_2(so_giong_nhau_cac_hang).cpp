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
void Xu_li(int arr[100][100],int n)
{
	int tam[100]={0};
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(tam[arr[0][i]]==0)
		{
			tam[arr[0][i]]=1;
		}
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(tam[arr[i][j]]==i)
			{
				tam[arr[i][j]]++;
				if(i==n-1)
				{
					//cout<<arr[i][j]<<" ";
					dem++;
				}
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
		int n;
		cin>>n;
		Nhap_mang(arr,n);
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

