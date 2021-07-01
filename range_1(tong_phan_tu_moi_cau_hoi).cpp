#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void Nhap_mang(int arr[],int n)
{
	for(int i=1;i<=n;i++)
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
		int n,k;
		cin>>n>>k;
		int a,b;
		Nhap_mang(arr,n);
		while(k--)
		{
			cin>>a>>b;
			int tong=0;
			for(int j=1;j<=n;j++)
			{
				if(j>=a&&j<=b)
				{
					tong+=arr[j];
				}
			}
			cout<<tong<<endl;
		}
		cout<<endl;
	}
	return 0;
}

