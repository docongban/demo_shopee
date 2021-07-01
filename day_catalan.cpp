#include<bits/stdc++.h>
using namespace std;
int Catalan(int n)
{
	int tong=0;
	if(n==0||n==1) return 1;
	for(int i=0;i<n;i++)
	{
		tong+=Catalan(i)*Catalan(n-i-1);
	}
	return tong;
}
int main()
{
	int n;
	cin>>n;
	cout<<Catalan(n);
	return 0;
}

