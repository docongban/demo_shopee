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
		int x=str.size();
		for(int i=0;i<str.size();i++)
		{
			for(int j=i+1;j<str.size();j++)
			{
				if(str[i]==str[j])
				{
					x++;
				}
			}
		}
		cout<<x<<endl;
	}
	return 0;
}

