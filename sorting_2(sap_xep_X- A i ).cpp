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
/*void Xu_li(int arr[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x=abs(arr[i]-k),y=abs(arr[j]-k);
			if(x<y)
			{
				swap(arr[i],arr[j]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}*/
void Xu_li(int arr[],int n,int k)
{
	for(int i=1;i<n;i++)
	{
		int tam=abs(arr[i]-k);
		int j=i-1;
		if(abs(arr[j]-k)>tam)//so sau lon hon so truoc
		{
			int x=arr[i];
			while(abs(arr[j]-k)>tam&&j>=0)
			{
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=x;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Nhap(arr,n);
		Xu_li(arr,n,k);
		cout<<endl;
	}
	return 0;
}

