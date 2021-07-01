#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Max_hieu(int arr[],int n)
{
	int max=arr[1]-arr[0];
	int x=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(max<arr[j]-arr[i])
			{
				max=arr[j]-arr[i];
				x=1;
			}
		}
	}
	if(x==0) cout<<"-1";
	else if(x==1) cout<<max;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Nhap_mang(arr,n);
		Max_hieu(arr,n);
		cout<<endl;
	}
	return 0;
}

