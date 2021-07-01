#include<bits/stdc++.h>
using namespace std;
int arr1[1000000];
int arr2[1000000];
int arr3[1000000];
int brr[1000000];
void Nhap_mang(int arr[],long long n)
{
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n1,n2,n3;
		cin>>n1>>n2>>n3;
		Nhap_mang(arr1,n1);
		Nhap_mang(arr2,n2);
		Nhap_mang(arr3,n3);
		long long x=0;
		long long i=0,j=0,k=0;
		while(i<n1&&j<n2&&k<n3)
		{
			if(arr1[i]==arr2[j]&&arr2[j]==arr3[k])
			{
				brr[x++]=arr1[i];
				i++;j++;k++;
			}
			else if(arr1[i]<arr2[j]) i++;
			else if(arr2[j]<arr3[k]) j++;
			else k++;
		}
		if(x==0) cout<<-1;
		else
		{
			for(long long i=0;i<x;i++)
			{
				cout<<brr[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

