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
		int k;
		cin>>k;
		int arr[1000];int dem=0,count=0;
		for(int i=0;i<str.size();i++)
		{
			memset(arr,0,sizeof(arr));
			dem=0;
			for(int j=i;j<str.size();j++)
			{
				if(arr[str[j]-'a']==0)
				{
					dem++;
				}
				arr[str[j]-'a']++;
				if(dem==k)
				{
					count++;
				}
				else if(dem>k)
				{
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

