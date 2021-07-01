#include<bits/stdc++.h>
using namespace std;
int arr[100000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
bool Tang(int a,int b)
{
	int x=10,y=10;
	while(a/x>0)
	{
		x*=10;
	}
	while(b/y>0)
	{
		y*=10;
	}
	return a*y+b>b*x+a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Nhap(arr,n);
		sort(arr,arr+n,Tang);
		for(int i=0;i<n;i++)
		{
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}

