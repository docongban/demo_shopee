#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		getline(cin,str);
		int k;
		cin>>k;
		int arr[26]={0};
		int brr[26]={0};
		for(int i=0;i<str.size();i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				arr[str[i]-'a']++;
			}
			else
			{
				brr[str[i]-'A']++;
			}
		}
		int dem1=0,dem2=0;
		for(int i=0;i<26;i++)
		{
			if(arr[i]>0)
			{
				dem1++;
			}
			if(brr[i]>0)
			{
				dem2++;
			}
		}
		if(max(dem1,dem2)+k>=26)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}

