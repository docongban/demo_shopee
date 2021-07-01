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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		Nhap_mang(arr,n);
		sort(arr,arr+n);
		int test=-1;
		int i=0,j=1;
		while(i<n&&j<n)
		{
			if(arr[j]-arr[i]==x&&i!=j)
			{
				test=1;
				break;
			}
			else if(arr[j]-arr[i]<x) j++;
			else i++;
		}
		cout<<test<<endl;
	}
	return 0;
}
