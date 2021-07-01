#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
void Nhap_mang(int arr[100][100],int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>arr[i][j];
		}
	}
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
		for(int i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
				for(int j=1;j<=n;j++)
				{
					cout<<arr[i][j]<<" ";
				}
			}
			else
			{
				for(int j=n;j>=1;j--)
				{
					cout<<arr[i][j]<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}

