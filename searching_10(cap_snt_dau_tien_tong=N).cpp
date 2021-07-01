#include<bits/stdc++.h>
using namespace std;
int arr[100000];
bool Kiem_tra_so_nguyen_to(int n)
{
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
void Xu_li(int n)
{
	int check=1;
	int x=0,y=0;
	for(int i=2;i<n;i++)
	{
		if(Kiem_tra_so_nguyen_to(i)==true) 
		{
			for(int j=2;j<n;j++)
			{
				if(Kiem_tra_so_nguyen_to(j)==true)
				{
					if(i+j==n)
					{
						check=1;
						x=i;
						y=j;
						break;
					}
				}
			}
		}
	}
	if(check==1)
	{
		cout<<y<<" "<<x;
	}
	else cout<<-1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Xu_li(n);
		cout<<endl;
	}
	return 0;
}

