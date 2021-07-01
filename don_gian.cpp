#include<bits/stdc++.h>
using namespace std;
int arr[100];
void Xuat(int arr[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
	cout<<" ";
}
void Xu_li(int arr[],int n,int i)
{
	for(int j=0;j<=1;j++)
	{
		arr[i]=j;
		if(i==n) Xuat(arr,i);
		else Xu_li(arr,n,i+1);
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
		Xu_li(arr,n,1);
		cout<<endl;
	}
	return 0;
}
