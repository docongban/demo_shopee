#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int brr[1000000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
long long Sum(int arr[],int n)
{
	long long sum=0,end=0;
	int x=-1000000;
	int test=1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0) test=0;
		else 
		{
			x=max(x,arr[i]);
		}
		sum+=arr[i];
		if(sum<0) sum=0;
		if(sum>end) end=sum;
	}
	if(test) return x;
	return end;
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
		cout<<Sum(arr,n);
		cout<<endl;
	}
	return 0;
}

