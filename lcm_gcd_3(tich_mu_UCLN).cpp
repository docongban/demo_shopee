#include<bits/stdc++.h>
using namespace std;
int arr[100];
long long e=1000000007;
void Nhap_mang(int arr[],int n)
{
	for(int i=0;i<n;i++)
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
		int n;
		cin>>n;
		Nhap_mang(arr,n);
		long long tich=1;
		int Ucln=__gcd(arr[0],arr[0]);
		for(int i=1;i<n;i++)
		{
			Ucln=__gcd(Ucln,arr[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<Ucln;j++)
			{
				tich=(tich*arr[i])%e;
			}
		}
		cout<<tich<<endl;
	}
	return 0;
}
