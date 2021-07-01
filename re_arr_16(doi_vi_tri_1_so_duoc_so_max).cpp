#include<bits/stdc++.h>
using namespace std;
string str;
string Tim(string str)
{
	int l=str.size();
	int m=-1;
	for(int i=l-2;i>=0;i--)
	{
		if(str[i]>str[i+1])
		{
			m=i;
			break;
		}
	}
	int Min=-1;
	for(int i=l-1;i>m;i--)
	{
		if(str[i]<str[m])
		{
			if(str[i]==-1)
			{
				Min=i;
			}
			else if(str[i]>=str[Min])
			{
				Min=i;
			}
		}
	}
	if(m==-1) return "-1";
	if(Min!=-1)
	{
		swap(str[Min],str[m]);
		return str;
	}
	return "-1";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		cout<<Tim(str);
		cout<<endl;
	}
	return 0;
}

