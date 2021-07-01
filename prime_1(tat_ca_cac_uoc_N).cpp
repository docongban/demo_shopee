#include<iostream>
#include<math.h>
using namespace std;
void So_nguyen_to(long long n)
{
	for(long long i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n!=1)
	{
		cout<<n;
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
		So_nguyen_to(n);
		cout<<endl;
	}
	return 0;
}

