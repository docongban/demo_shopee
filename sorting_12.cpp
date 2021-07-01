#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int brr[1000000];
void Nhap_mang(int arr[],long long n)
{
	for(long long i=0;i<n;i++)
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
		int n,m;
		cin>>n>>m;
		Nhap_mang(arr,n);
		Nhap_mang(brr,m);
		long long max=arr[0];
		for(long long i=0;i<n;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
		}
		long long min=brr[0];
		for(long long i=0;i<m;i++)
		{
			if(min>brr[i])
			{
				min=brr[i];
			}
		}
		cout<<min*max<<endl;
	}
	return 0;
}

