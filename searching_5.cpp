#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
void Nhap_mang(int arr[],long long n)
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
		long long n;
		cin>>n;
		Nhap_mang(arr,n);
		long long min=arr[0];
		for(long long i=0;i<n;i++)
		{
			if(min>arr[i])
			{
				min=arr[i];
			}
		}
		long long min2=arr[0];
		for(long long i=1;i<n;i++)
		{
			if(min2>arr[i]&&min<arr[i])
			{
				min2=arr[i];
			}
		}
		if(min2==min)
		{
			cout<<"-1";
		}
		else
		{
			cout<<min<<" "<<min2;
		}
		cout<<endl;
	}
	return 0;
}

