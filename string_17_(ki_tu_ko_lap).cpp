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
		int arr[100000]={0};
		for(int i=0;i<str.size();i++)
		{
			arr[str[i]]++;
		}
		for(int i=0;i<str.size();i++)
		{
			if(arr[str[i]]==1)
			{
				cout<<str[i];
			}
		}
		cout<<endl;
	}
	return 0;
}

