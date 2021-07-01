#include<iostream>
using namespace std;
#define max 1000000007;
int Fibonacci(int n)
{
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return 1;
	}
	int n1=0,n2=1,n3;
	for(int i=2;i<=n;i++)
	{
		n3=(n1+n2)%max;
		n1=n2;
		n2=n3;
	}
	return n3;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<Fibonacci(n)<<endl;
	}
	return 0;
}

