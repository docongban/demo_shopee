#include<bits/stdc++.h>
using namespace std;
#include<string>
string str;
void Ten(string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]-=32;
		}
	}
	stringstream str1(str);
	string token;
	string ten[100];
	int x=0;
	while(str1>>token)
	{
		ten[x]=token;
		x++;
	}
	cout<<", "<<ten[x-1];
}
int main()
{
	getline(cin,str);
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]+=32;
		}
	}
	stringstream str1(str);
	string token;
	string ten[100];
	int x=0;
	while(str1>>token)
	{
		token[0]-=32;
		ten[x]=token;
		x++;
	}
	for(int i=0;i<x-2;i++)
	{
		cout<<ten[i]<<" ";
	}
	for(int i=x-2;i<x-1;i++)
	{
		cout<<ten[i];
	}
	Ten(str);
	return 0;
}

