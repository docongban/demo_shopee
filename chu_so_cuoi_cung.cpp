#include<bits/stdc++.h>
using namespace std;
bool Kiem_tra(int n)
{
	if(n>=0&&n<=9)
	{
		return true;
	}
	return false;
}
int Tong(int n)
{
	int tong=0;
	while(n>0)
	{
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		while(true)
		{
			if(Kiem_tra(n))
			{
				break;
			}
			n=Tong(n);
		}
		cout<<n<<endl;
	}
	return 0;
}

