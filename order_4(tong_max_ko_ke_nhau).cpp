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
void Test(int arr[],int n)
{
	long long x1=0,x2;
	long long t=arr[0];
	for(int i=1;i<n;i++)
	{
		x2=max(x1,t);
		t=x1+arr[i];
		x1=x2;
	}
	cout<<max(x1,t);
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
		Test(arr,n);
		cout<<endl;
	}
	return 0;
}

