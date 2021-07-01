#include<bits/stdc++.h>
using namespace std;
bool Kiem_tra(long long n)
{
	if(n<2)
	{
		return false;
	}
	if(n<=3)
	{
		return true;
	}
	if(n%2==0||n%3==0)
	{
		return false;
	}
	for(long long i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0||n%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}
int Tong(int n)
{
	int tong=0;
	while(n!=0)
	{
		tong+=n%10;
		n/=10;
	}
	return tong;
}
bool Test(long long n)
{
	int tong=0;
	int tam=n;
	for(long long i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			//cout<<i<<" ";
			tong+=Tong(i);
			n/=i;
		}
	}
	if(n!=1)
	{
		//cout<<n;
		tong+=Tong(n);
	}
	n=tam;
	if(tong==Tong(n)&&Kiem_tra(n)==false)
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
		if(Test(n)==true)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}

