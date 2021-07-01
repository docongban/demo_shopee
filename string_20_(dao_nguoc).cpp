#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		getline(cin,str);
		stringstream str1(str);
		string token;
		string tach[1000];
		int x=0;
		while(str1>>token)
		{
			tach[x]=token;
			x++;
		}
		for(int i=x-1;i>=0;i--)
		{
			cout<<tach[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

