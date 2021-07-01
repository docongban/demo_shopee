#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
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
		int n,x;
		cin>>n>>x;
		Nhap_mang(arr,n);
		int k=0,z=0;
		for(int i=n;i>0;i--)
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

