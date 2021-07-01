#include<bits/stdc++.h>
using namespace std;
void Modulo(int a,int m)
{
	int x=0;
	for(int i=0;i<m;i++)
	{
		if((a*i)%m==1)
		{
			x=i;
		}
	}
	if(x==0)
	{
		cout<<"-1";
	}
	else cout<<x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,m;
		cin>>a>>m;
		Modulo(a,m);
		cout<<endl;
	}
	return 0;
}

