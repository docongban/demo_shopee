#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int brr[1000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int brr[],int n,int m)
{
	int i=0,j=0;
	int tong=0,tong1=0,tong2=0;
	while(i<n&&j<m)
	{
		if(arr[i]<brr[j])
		{
			tong1+=arr[i];
			i++;
		}
		else if(arr[i]>brr[j])
		{
			tong2+=brr[j];
			j++;
		}
		else
		{
			tong+=max(tong1,tong2);
			tong1=0;
			tong2=0;
			int tam=i;
			while(i<n&&arr[i]==brr[j])
			{
				tong1+=arr[i];
				i++;
			}
			while(j<m&&arr[tam]==brr[j])
			{
				tong2+=brr[j];
				j++;
			}
			tong+=max(tong1,tong2);
			tong1=0;
			tong2=0;
		}
	}
	while(i<n)
	{
		tong1+=arr[i];
		i++;
	}
	while(j<m)
	{
		tong2+=brr[j];
		j++;
	}
	tong+=max(tong1,tong2);
	cout<<tong;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		Nhap(arr,n);
		Nhap(brr,m);
		Xu_li(arr,brr,n,m);
		cout<<endl;
	}
	return 0;
}

