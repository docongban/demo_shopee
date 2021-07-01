#include<bits/stdc++.h>
using namespace std;
long long arr[100000000];
long long brr[100000000];
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
			brr[i]=-1;
		}
		for(long long i=0;i<n;i++)
		{
			for(long long j=0;j<n;j++)
			{
				if(i==arr[j])
				{
					brr[i]=i;
				}
			}
		}
		for(long long i=0;i<n;i++)
		{
			cout<<brr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

