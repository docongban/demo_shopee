#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int brr[100000];
int crr[100000];
int drr[100000];
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
		int n,m;
		cin>>n>>m;
		Nhap_mang(arr,n);
		Nhap_mang(brr,m);
		int x=m+n;
		for(int i=0;i<x;i++)
		{
			if(i<n)
			{
				crr[i]=arr[i];
			}
			else crr[i]=brr[i-n];
		}
		int t=0;
		for(int i=1;i<x;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(crr[i]==crr[j])
				{
					for(int k=i;k<x;k++) 
					{
						crr[k]=crr[k+1];
					}
					x--;
					drr[t++]=crr[j];
				}
			}
		}
		sort(crr,crr+x);
		for(int i=0;i<x;i++)
		{
			cout<<crr[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<t;i++)
		{
			cout<<drr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
