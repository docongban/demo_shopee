#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Sap_xep(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		Nhap_mang(arr,n);
		Sap_xep(arr,n);
		for(int i=0;i<n;i++)
		{
			if(x==i)
			{
				cout<<arr[i-1];
			}
		}
		cout<<endl;
	}
	return 0;
}
