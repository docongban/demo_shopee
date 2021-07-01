#include<bits/stdc++.h>
using namespace std;
string str1;
string str2;
string str;
bool Min(string str1,string str2)
{
	int l1=str1.size(),l2=str2.size();
	if(l1<l2)
	{
		return true;
	}
	else if(l1>l2)
	{
		return false;
	}
	for(int i=0;i<l1;i++)
	{
		if(str1[i]<str2[i])
		{
			return true;
		}
		else if(str1[i]>str2[i])
		{
			return false;
		}
	}
	return false;
}
void Tru(string str1,string str2)
{
	if(Min(str1,str2)==true)
	{
		swap(str1,str2);
	}
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	int l1=str1.size(),l2=str2.size();
	int x=0;
	string str="";
	for(int i=0;i<l2;i++)
	{
		int hieu=(str1[i]-'0')-(str2[i]-'0')-x;
		if(hieu<0)
		{
			hieu+=10;
			x=1;
		}
		else x=0;
		str.push_back(hieu+'0');
	}
	for(int i=l2;i<l1;i++)
	{
		int hieu=str1[i]-'0'-x;
		if(hieu<0)
		{
			hieu+=10;
			x=1;
		}
		else x=0;
		str.push_back(hieu+'0');
	}
	reverse(str.begin(),str.end());
	cout<<str;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str1>>str2;
		Tru(str1,str2);
		cout<<endl;
	}
	return 0;
}

