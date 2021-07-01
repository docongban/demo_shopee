#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int n,int k)
{
	sort(arr,arr+n);
	long long dem=0;
	for(int i=0;i<n-1;i++)
	{
		int x1=arr[i]+k;
		int x2=lower_bound(arr,arr+n,x1)-arr;
		int x=x2-i-1;
		if(x>=1)
		{
			dem+=x;
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
		int n,k;
		cin>>n>>k;
		Nhap(arr,n);
		Xu_li(arr,n,k);
		cout<<endl;
	}
	return 0;
}
