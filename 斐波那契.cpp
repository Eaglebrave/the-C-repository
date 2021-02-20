#include <bits/stdc++.h>
using namespace std;
int n,a[1001];
int f(int x){
	if(x==1||x==2)return 1;
	if(a[x]!=-1)return a[x];
	else return a[x]=((f(x-1)+f(x-2))%9997);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)a[i]=-1;
	cout<<f(n)<<endl;
	return 0;
}
