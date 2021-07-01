#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int brr[1000000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Sap_xep(int arr[],int brr[],int n,int m)
{
	sort(arr,arr+n);
	int x=arr[0]-1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(brr[i]==arr[j])
			{
				cout<<arr[j]<<" ";
				arr[j]=x;
			}
			else if(arr[j]>brr[i])
			{
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=x)
		{
			cout<<arr[i]<<" ";
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
		Nhap(arr,n);
		Nhap(brr,m);
		Sap_xep(arr,brr,n,m);
		cout<<endl;
	}
	return 0;
}

