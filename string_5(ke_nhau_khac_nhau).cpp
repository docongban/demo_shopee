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
		int x=0;
		int arr[1000]={0};
		for(int i=0;i<str.size();i++)
		{
			arr[str[i]]++;
			if(x<arr[str[i]])
			{
				x=arr[str[i]];
			}
		}
		if(x<=str.size()-x&&str.size()%2==0)
		{
			cout<<"1";
		}
		else if(x<str.size()/2+1&&str.size()%2!=0)
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
