#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,y,p;
		cin>>x>>y>>p;
		long long tich=1;
		while(y--)
		{
			tich*=x;
			tich%=p;
		}
		cout<<tich;
		cout<<endl;
	}
	return 0;
}

