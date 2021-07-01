#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		string str;
		getline(cin,str);
		stringstream str1(str);
		string token;
		string tam[100];
		int x=0;
		while(str1>>token)
		{
			tam[x]=token;
			x++;
		}
		int dem=0;
		for(int i=0;i<x;i++)
		{
			dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}

