#include<bits/stdc++.h>
using namespace std;
int Modulo(int n,int r)
{
	if(r>n-r)
	{
		r=n-r;
	}
	int arr[r+1];
	memset(arr,0,sizeof(arr));
	arr[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=min(i,r);j>0;j--)
		{
			arr[j]=(arr[j]+arr[j-1])%1000000007;
		}
	}
	return arr[r];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<Modulo(n,k)<<endl;;
	}
	return 0;
}

