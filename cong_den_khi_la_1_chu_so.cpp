#include<bits/stdc++.h>
using namespace std;
int arr[100000];
long long Tong(long long n)
{
	if(n==0) return 0;
	return Tong(n/10)+n%10;
}
long long Ket_qua(long long n)
{
	if(n<10) return n;
	long long tong;
	tong=Tong(n);
	return Ket_qua(tong);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<Ket_qua(n)<<endl;
	}
	return 0;
}
