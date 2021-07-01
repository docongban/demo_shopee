#include<bits/stdc++.h>
#include<string>
using namespace std;
string str;
void Xu_li(string str)
{
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]+=32;
		}
	}
	stringstream str1(str);
	string token;
	string ho[100];
	int x=0;
	string ten[100];
	int y=0;
	while(str1>>token)
	{
		ho[x]=token[0];
		x++;
		ten[y]=token;
		y++;
	}
	cout<<ten[y-1];
	for(int i=0;i<x-1;i++)
	{
		cout<<ho[i];
	}
	cout<<"@ptit.edu.vn";
}
int main()
{
	getline(cin,str);
	Xu_li(str);
	return 0;
}

