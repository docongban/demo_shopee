#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
void Nhap_mang(int arr[],int n)
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
		int n,x;
		cin>>n>>x;
		Nhap_mang(arr,n);
		sort(arr,arr+n);
		int k=0;
		for(int i=0;i<n;i++)
		{
			if(x==i)
			{
				k=arr[i-1];
				break;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}

