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
		long long tong=0,x=0;
		for(int i=0;i<str.size()+1;i++)
		{
			if(str[i]>='1'&&str[i]<='9')
			{
				x=x*10+(str[i]-'0');
			}
			else
			{
				tong+=x;
				x=0;
			}
		}
		cout<<tong<<endl;
	}
	return 0;
}

