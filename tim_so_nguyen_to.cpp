#include<iostream>
using namespace std;
bool Kiem_tra_so_nguyen_to(int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++)
	{
		if(Kiem_tra_so_nguyen_to(i)==true)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

