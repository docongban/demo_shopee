#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int brr[1000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Max(int arr[],int brr[],int n)
{
	int max=0;
	int x1,x2;
	for(int i=0;i<n;i++)
	{
		x1=0,x2=0;
		for(int j=i;j<n;j++)
		{
			x1+=arr[j];
			x2+=brr[j];
			if(x1==x2)
			{
				if(max<j-i+1)
				{
					max=j-i+1;
				}
			}
		}
	}
	cout<<max;
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
		Nhap_mang(brr,n);
		Max(arr,brr,n);
		cout<<endl;
	}
	return 0;
}

