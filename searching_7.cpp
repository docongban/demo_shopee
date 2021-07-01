#include<bits/stdc++.h>
using namespace std;
int arr[1000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Sap_xep(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				swap(arr[i],arr[j]);
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
		int n,k;
		cin>>n>>k;
		Nhap_mang(arr,n);
		Sap_xep(arr,n);
		for(int i=0;i<n;i++)
		{
			if(i<k)
			{
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

