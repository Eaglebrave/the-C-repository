#include <bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
	int n,s=0,i,x;
	cin>>n;
	for(i=1;i<=n;i++)
	{cin>>x;
	a[x]=1;}
	cin>>x;
	for(i=1;i<=x/2;i++)
	{if(a[i]==1&&a[x-i]==1&&i!=x-i)s++;
	}
	cout<<s;
}
