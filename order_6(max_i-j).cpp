#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
void Nhap(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(long long arr[],long long n)
{
	long long t=0;
	for(long long i=n-1;i>=0;i--)
	{
		long long k=0;
		while(arr[k]>arr[i]&&k<n&&(i-k)>t)
		{
			k++;
		}
		t=max(t,i-k);
	}
	cout<<t;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Nhap(arr,n);
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

