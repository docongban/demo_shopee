#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		long long x=0,max=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				x=x*10+str[i]-'0';
			}
			else
			{
				if(max<x)
				{
					max=x;
				}
				else
				{
					max=max;
				}
				x=0;
			}
		}
		cout<<max;
		cout<<endl;
	}
	return 0;
}

