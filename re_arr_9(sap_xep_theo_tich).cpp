#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int brr[100000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int n)
{
	int first=arr[0],first1=arr[1];
	cout<<first*first1<<" ";
	int end=arr[n-1],end1=arr[n-2];
	int x=0;	
	for(int i=1;i<n-1;i++)
	{
		brr[x++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
    	brr[i]=arr[i]*arr[i+2];
	}
	for(int i=0;i<x;i++)
	{
		cout<<brr[i]<<" ";
	}
	cout<<end1*end;
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
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}
