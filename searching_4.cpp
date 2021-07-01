#include<bits/stdc++.h>
using namespace std;
int arr[10000000];
void Nhap_mang(int arr[],long long n)
{
	for(long long i=1;i<=n;i++)
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
		long long n,x;
		cin>>n>>x;
		Nhap_mang(arr,n);
		long long k=0,z=0;
		for(long long i=n;i>0;i--)
		{
			if(x==arr[i])
			{
				k=1;
				z=i;
			}
		}
		if(k==1)
		{
			cout<<z;
		}
		else
		{
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

