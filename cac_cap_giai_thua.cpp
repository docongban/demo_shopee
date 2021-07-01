#include<bits/stdc++.h>
using namespace std;
int arr[1000];
long long Giai_thua(int n)
{
	long long tich=1;
	for(int i=1;i<=n;i++)
	{
		tich*=i;
	}
	return tich;
}
long long Tich_chu_so(int n)
{
	long long tich=1;
	while(n>0)
	{
		tich*=Giai_thua(n%10);
		n/=10;
	}
	return tich;
}
bool Chu_so(int n)
{
	while(n>0)
	{
		if(n%10==0||n%10==1) return false;
		n/=10;
	}
	return true;
}
void Xu_li(int n)
{
	int x;
	for(int i=0;i<=1000000;i++)
	{
		if(Tich_chu_so(i)==Tich_chu_so(n))
		{
			if(Chu_so(i))
			{
				arr[x++]=i;
			}
		}
	}
	cout<<arr[x-1];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n;
		do
		{
			cin>>a;
		}while(a>=pow(10,n)||a<pow(10,n-1));
		Xu_li(a);
		cout<<endl;
	}
	return 0;
}

