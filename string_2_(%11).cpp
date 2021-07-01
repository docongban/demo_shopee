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
		int tong1=0,tong2=0;
		for(int i=0;i<str.size();i++)
		{
			if(i%2==0)
			{
				tong1+=str[i]-'0';
			}
			else
			{
				tong2+=str[i]-'0';
			}
		}
		int hieu=abs(tong1-tong2);
		if(hieu%11==0)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}

