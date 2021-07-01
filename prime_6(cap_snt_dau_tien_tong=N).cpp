#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void Sang_nguyen_to()
{
	for(int i=2;i<=10000;i++)
	{
		arr[i]=1;
	}
	for(int i=2;i<=10000;i++)
	{
		if(arr[i]==1)
		{
			for(int j=i*i;j<=10000;j+=i)
			{
				arr[j]=0;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Sang_nguyen_to();
		for(int i=2;i<=n/2;i++)
		{
			if(arr[i]==1&&arr[n-i]==1)
			{
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}

