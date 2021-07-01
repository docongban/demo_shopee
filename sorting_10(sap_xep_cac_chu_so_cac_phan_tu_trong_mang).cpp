#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
long long brr[1000000];
void Nhap(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xoa(long long arr[],long long &n,long long x)
{
	for(long long i=x+1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	n--;
}
void Trung(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		for(long long j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				Xoa(arr,n,j);
				j--;
			}
		}
	}
	for(long long i=0;i<n;i++) cout<<arr[i]<<" ";
}
void Xu_li(long long arr[],long long n)
{
	long long x=0;
	for(long long i=0;i<n;i++)
	{
		while(arr[i]>0)
		{
			brr[x++]=arr[i]%10;
			arr[i]/=10;
		}
	}
	sort(brr,brr+x);
	Trung(brr,x);
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

