#include <bits/stdc++.h>
using namespace std;
int s[21],n,rest,total;
void pr(int d)
{ total+=1;
for(int i=1;i<=d-1;i++) printf("%d+",s[i]);
printf("%d\n",s[d]);}
void dfs(int dep)
{ if(rest==0)pr(dep-1);
else for(int i=s[dep-1];i<=rest;i++)
{ s[dep]=i;
rest-=i;
dfs(dep+1);
rest+=i;}}
int main(){ scanf("%d",&n);
s[0]=1;
rest=n;
dfs(1);
printf("total=%d\n",total);
return 0;}
