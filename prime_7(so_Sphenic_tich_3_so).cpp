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
		int dem=0;
		if(arr[n]==1)
		{
			cout<<"0";
		}
		else
		{
			for(int i=2;i<=n;i++)
			{
				if(arr[i]==1&&n%i==0)
				{
					dem++;
					arr[i]=0;
					n/=i;
				}
			}
			if(dem==3&&n==1)
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	return 0;
}

