#include<bits/stdc++.h>
#include<string>
using namespace std;
long long arr[100000];
void So_nguyen_to(long long n)
{
	long long x=0;
	for(long long i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			arr[x]=i;
			n/=i;
			x++;
		}
	}
	if(n!=1)
	{
		arr[x]=n;
		x++;
	}
	long long Max=0;;
	for(long long i=0;i<x;i++)
	{
		Max=max(Max,arr[i]);
	}
	cout<<Max;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		So_nguyen_to(n);
		cout<<endl;
	}
	return 0;
}
