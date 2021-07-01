#include<bits/stdc++.h>
using namespace std;
int arr[1000];
long long Tong(int n)
{
	long long tong=0;
	while(n>0)
	{
		tong+=n%10;
		n/=10;
	}
	return tong;
}
long long Mu(int x,int n)
{
	long long tich=1;
	while(n--)
	{
		tich*=x;
	}
	return tich;
}
int main()
{
	int n,s;
	cin>>n>>s;
	int x=0;
	for(int i=Mu(10,n-1);i<Mu(10,n);i++)
	{
		if(Tong(i)==s)
		{
			arr[x++]=i;;
		}
	}
	if(x<1)
	{
		cout<<"-1 -1";
	}
	else
	{
		cout<<arr[0]<<" "<<arr[x-1];
	}
	return 0;
}

