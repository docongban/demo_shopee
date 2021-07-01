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
int Tim(int arr[],int n)
{
	int x,y;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=0||arr[i]>n)
		{
			continue;
		}
		x=arr[i];
		while(arr[x-1]!=x)
		{
			y=arr[x-1];
			arr[x-1]=x;
			x=y;
			if(x<=0||x>n)
			{
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=i+1)
		{
			return i+1;
		}
	}
	return n+1;
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
		cout<<Tim(arr,n)<<endl;
	}
	return 0;
}

