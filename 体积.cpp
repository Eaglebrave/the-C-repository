#include<bits/stdc++.h>
using namespace std;
int v[21],n;
bool hash[1001];
void dfs(int dep,int sum)
{if(dep>n){hash[sum]=true;
return;}
dfs(dep+1,sum+v[dep]);
dfs(dep+1,sum);}
int main()
{cin>>n;
for(int i=1;i<=n;i++)
cin>>v[i];
dfs(1,0);
int ans=0;
for(int i=1;i<=1000;i++)
if(hash[i])ans++;
cout<<ans<<endl;
return 0;}
