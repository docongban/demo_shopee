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
		int n;
		cin>>n;
		Nhap_mang(arr,n);
		int x=0;
		for(int i=n-1;i>=0;i--)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(arr[i]==arr[j])
				{
					x=arr[i];
					break;
				}
			}
		}
		if(x==0)
		{
			cout<<"-1";
		}
		else
		{
			cout<<x;
		}
		cout<<endl;
	}
	return 0;
}

