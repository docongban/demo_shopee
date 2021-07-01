#include<iostream>
using namespace std;
bool Kiem_tra_so_nguyen_to(long long n)
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
void Test(long long n)
{
	for(int i=2;i<=n;i++)
	{
		if(Kiem_tra_so_nguyen_to(i)==true)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Test(n);
		cout<<endl;
	}
	return 0;
}
