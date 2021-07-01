#include<bits/stdc++.h>
using namespace std;
int arr[2000];
void Nhap(int arr[],int n)
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
		Nhap(arr,n);
		long long t=1;
		n--;
		long long tong=arr[n];
		t=1;
		for(int j=n-1;j>=0;j--)
		{
			t=(t*x)%1000000007;
			tong=(tong+t*arr[j])%1000000007;
		}
		cout<<tong<<endl;
	}
	return 0;
}

