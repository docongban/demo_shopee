#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
void Nhap(long long arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
bool Kiem_tra_tang(long long arr[],long long n)
{
	for(long long i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			return false;
		}
	}
	return true;
}
void Xu_li(long long arr[],long long n)
{
	int x,y;
	for(long long i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]&&arr[i+1]>arr[i-1])
		{
			x=i;
			break;
		}
		if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]&&arr[i+1]<arr[i-1])
		{
			x=i-1;
			break;
		}
	}
	for(long long i=0;i<n;i++)
	{
		for(long long j=i+1;j<n;j++)
		{
			if(Kiem_tra_tang(arr,j-i)==false)
			{
				sort(arr,arr+(j-i));
				y=j;
			}
		}
	}
	cout<<x+1<<" "<<y;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Nhap(arr,n);
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

