#include<bits/stdc++.h>
using namespace std;
int arr[1000];
void Nhap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Xu_li(int arr[],int n)
{
	sort(arr,arr+n);
	int x1=0,x2=n-1;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			cout<<arr[x1]<<" ";
			x1++;
		}
		else
		{
			cout<<arr[x2]<<" ";
			x2--;
		}
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
		Nhap(arr,n);
		Xu_li(arr,n);
		cout<<endl;
	}
	return 0;
}

