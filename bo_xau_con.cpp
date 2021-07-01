#include<bits/stdc++.h>
#include<string>
using namespace std;
string str;
string xoa;

int main()
{
	getline(cin,str);
	getline(cin,xoa);
	int x=str.find(xoa);
	str.erase(x,xoa.size());
	cout<<str;
	return 0;
}

