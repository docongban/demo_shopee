#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int n)
{
	long long Max=1,Min=1,x=1;
	for(int i=0;i<n;i++)
	{	
		long long t=arr[i];
		if(t<0)
		{
			swap(Max,Min);
		}
		Max=max(Max*t,t);
		Min=min(Min*t,t);
		x=max(x,Max);
	}
	cout<<x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Nhap(arr,n);
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

