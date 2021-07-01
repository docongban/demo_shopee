#include<bits/stdc++.h>
using namespace std;
int arr[100][100]={0};
void Mang(int arr[100][100],int n)
{
	for(int i=0;i<4*n;i++)
	{
		for(int j=0;j<4*n;j++)
		{
			arr[i][j]=i*(4*n)+(j+1);
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
		Mang(arr,n);
		int h=2;
		n=4*n;
		int i=n/2,j=n/2-1;
		while(h<=n)
		{
			for(int k=i;k>=0&&k>i-h;k--)
			{
				cout<<arr[k][j]<<" ";
			}
			i-=h;
			if(i<0) break;
			for(int k=j;k<n&&k<j+h;k++)
			{
				cout<<arr[i][k]<<" ";
			}
			j+=h;h+=2;
			if(j>=n) break;
			for(int k=i;k<n&&k<i+h;k++)
			{
				cout<<arr[k][j]<<" ";
			}
			i+=h;
			if(i>=n) break;
			for(int k=j;k>=0&&k>j-h;k--)
			{
				cout<<arr[i][k]<<" ";
			}
			j-=h;h+=2;
			if(j<0) break;
		}
		cout<<endl;
		i=n/2-1;j=n/2;h=2;
		while(h<=n)
		{
			for(int k=i;k<n&&k<i+h;k++)
			{
				cout<<arr[k][j]<<" ";
			}
			i+=h;
			if(i>=n) break;
			for(int k=j;k>=0&&k>j-h;k--)
			{
				cout<<arr[i][k]<<" ";
			}
			j-=h;h+=2;
			if(j<0) break;
			for(int k=i;k>=0&&k>i-h;k--)
			{
				cout<<arr[k][j]<<" ";
			}
			i-=h;
			if(i<0) break;
			for(int k=j;k<n&&k<j+h;k++)
			{
				cout<<arr[i][k]<<" ";
			}
			j+=h;h+=2;
			if(j>=n) break;
		}
		cout<<endl;
	}
	return 0;
}

