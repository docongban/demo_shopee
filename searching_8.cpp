#include<bits/stdc++.h>
using namespace std;
int arr[1000];
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
		int dem=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==x)
			{
				dem++;
			}
		}
		if(dem>0)
		{
			cout<<dem;
		}
		else
		{
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

