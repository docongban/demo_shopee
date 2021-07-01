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
		int tong=0;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				tong=tong+(str[i]-'0');
				str.erase(str.begin()+i);
				i--;
			}
		}
		sort(str.begin(),str.end());
		cout<<str<<tong<<endl;
	}
	return 0;
}

