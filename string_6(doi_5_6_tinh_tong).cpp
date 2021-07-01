#include<bits/stdc++.h>
using namespace std;
string str1;
string str2;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str1>>str2;
		for(int i=0;i<str1.size();i++)
		{
			if(str1[i]=='6')
			{
				str1[i]='5';
			}
		}
		for(int i=0;i<str2.size();i++)
		{
			if(str2[i]=='6')
			{
				str2[i]='5';
			}
		}
		long long min1=0,min2=0;
		for(int i=0;i<str1.size();i++)
		{
			min1=min1*10+str1[i]-'0';
		}
		for(int i=0;i<str2.size();i++)
		{
			min2=min2*10+str2[i]-'0';
		}
		cout<<min1+min2<<" ";
		
		for(int i=0;i<str1.size();i++)
		{
			if(str1[i]=='5')
			{
				str1[i]='6';
			}
		}
		for(int i=0;i<str2.size();i++)
		{
			if(str2[i]=='5')
			{
				str2[i]='6';
			}
		}
		long long max1=0,max2=0;
		for(int i=0;i<str1.size();i++)
		{
			max1=max1*10+str1[i]-'0';
		}
		for(int i=0;i<str2.size();i++)
		{
			max2=max2*10+str2[i]-'0';
		}
		cout<<max1+max2;
		cout<<endl;
	}
	return 0;
}

