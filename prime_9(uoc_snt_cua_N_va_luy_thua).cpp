#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int dem;
		for(int i=2;i<=n;i++)
		{
			dem=0;
			while(n%i==0)
			{
				dem++;
				n/=i;
			}
			if(dem)
			{
				cout<<i<<" "<<dem<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

