#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int k=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				arr[k]=i;
				n/=i;
				k++;
			}
		}
		if(n!=1)
		{
			arr[k]=n;
			k++;
		}
		int z=0;
		for(int i=0;i<k;i++)
		{
			if((x-1)==i)
			{
				arr[x-1]=arr[i];
				z++;
			}
		}
		if(z==1)
		{
			cout<<arr[x-1];
		}
		else
		{
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}

