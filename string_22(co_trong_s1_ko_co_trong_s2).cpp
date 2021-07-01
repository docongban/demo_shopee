#include<bits/stdc++.h>
using namespace std;
string str1;
string str2;
/*void Xu_li(string str1,string str2)
{
	stringstream Str1(str1);
	string token1;
	string tach1[100];
	int x1=0;
	while(Str1>>token1)
	{
		tach1[x1]=token1;
		x1++;
	}
	
	stringstream Str2(str2);
	string token2;
	string tach2[100];
	int x2=0;
	while(Str2>>token2)
	{
		tach2[x2]=token2;
		x2++;
	}
	for(int i=0;i<x1;i++)
	{
		for(int j=0;j<x2;j++)
		{
			if(tach2[j]==tach1[i])
			{
				tach1[i]=tach1[i+1];
			}
		}
		x1--;
	}
	for(int i=0;i<x1;i++)
	{
		cout<<tach1[i]<<" ";
	}
}*/
void Xu_li(string str1,string str2)
{
	int i=0;
	string tam[100];
	int t=0;
	strcat(str1,'|');
	while(str1[i]!='|')
	{
		int j=0;
		int k=i;
		while(str1[k]==str2[j])
		{
			k++;
			j++;
		}
		if(j==str2.size()) i+=str2.size();
		else tam[t++]=str1[i++];
	}
	for(int i=0;i<t;i++)
	{
		cout<<tam[i];
	}
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,str1);
		getline(cin,str2);
		Xu_li(str1,str2);
		cout<<endl;
	}
	return 0;
}

