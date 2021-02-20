#include<bits/stdc++.h>
using namespace std;
int s[21],hash[21],n,r,total;
void pr(int d)
{total+=1;
for(int i=1;i<=d-1;i++)printf("%d ",s[i]);
printf("%d\n",s[d]);}
void dfs(int dep)
{for(int i=1;i<=n;i++)
if(hash[i]==false){ s[dep]=i;
hash[i]=true;
if(dep==r) pr(dep);
else dfs(dep+1);
hash[i]=false;}}
int main(){
cin>>n>>r;
dfs(1);
printf("total=%d\n",total);    
return 0;}
