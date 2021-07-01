#include<bits/stdc++.h>
using namespace std;
bool Kiem_tra_so_nguyen_to(int n)
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
	for(int i=5;i<=sqrt(n);i+=6)
	{
		if(n%i==0||n%(i+2)==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int dem=0;
		for(int i=a;i<=b;i++)
		{
			if(Kiem_tra_so_nguyen_to(i)==true)
			{
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}

