#include<bits/stdc++.h>
using namespace std;
int arr[20];
void Xuat(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			arr[i]=0;
		}
		Xuat(arr,n);
		for(int i=n-1;i>=0;i--)
		{
			if(arr[i]==0)
			{
				arr[i]=1;
				for(int j=i+1;j<n;j++)
				{
					arr[j]=0;
				}
				Xuat(arr,n);
				i=n;
			}
		}
		cout<<endl;
	}
	return 0;
}

