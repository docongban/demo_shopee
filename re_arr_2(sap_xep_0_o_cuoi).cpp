#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
void Nhap_mang(long long arr[],long long n)
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
		long long n;
		cin>>n;
		Nhap_mang(arr,n);
		for(long long i=0;i<n;i++)
		{
			if(arr[i]!=0)
			{
				cout<<arr[i]<<" ";
			}
		}
		for(long long i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
