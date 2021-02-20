#include <bits/stdc++.h>
using namespace std;
int l,sum,a[100010];
long long ans;
string st;
int main()
{cin>>l;
getchar();
l--;
getline(cin,st);
sum=0;
for(int i=l;i>=0;i--){
	if(st[i]=='W')++sum;
	if(st[i]=='O')a[i]=sum;
}
ans=0,sum=0;
for(int i=l;i>=0;i--)
{if(a[i])sum+=a[i];
if(st[i]=='C')ans+=sum;}
cout<<ans<<endl;
return 0;}
