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
		int n,k;
		cin>>k>>n;
		Nhap_mang(arr,n*k);
		sort(arr,arr+(n*k));
		for(int i=0;i<n*k;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

