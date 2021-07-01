#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
bool Kiem_tra_so_fibonacci(int n)
{
	int n1=0,n2=1,n3=1;
	if(n<0)
	{
		return false;
	}
	else if(n<4)
	{
		return true;
	}
	while(n3<n)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	if(n==n3)
	{
		return true;
	}
	return false;
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
		for(int i=0;i<n;i++)
		{
			if(Kiem_tra_so_fibonacci(arr[i])==true)
			{
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

