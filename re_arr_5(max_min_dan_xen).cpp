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
		int n;
		cin>>n;
		Nhap_mang(arr,n);
		sort(arr,arr+n);
		if(n%2==0)
		{
			for(int i=0;i<n/2;i++)
			{
				cout<<arr[n-i-1]<<" "<<arr[i]<<" ";
			}
		}
		else
		{
			for(int i=0;i<n/2;i++)
			{
				cout<<arr[n-i-1]<<" "<<arr[i]<<" ";
			}
			cout<<arr[n/2];
		}
		cout<<endl;
	}
	return 0;
}

