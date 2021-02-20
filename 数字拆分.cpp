#include<bits/stdc++.h>
using namespace std;
int s[21];
int n,total;
void pr(int d)
{total++;
for(int i=1;i<=d-1;i++)
printf("%d+",s[i]);
printf("%d\n",s[d]);
}void dfs(int dep,int rest)
{
if(rest==0)
{if(dep>1)pr(dep-1);
}
else for(int i=s[dep-1];i<=rest;i++)
{s[dep]=i;
dfs(dep+1,rest-i);
}}
int main()
{scanf("%d",&n);
s[0]=1;
dfs(1,n);
printf("total=%d\n",total);
return 0;}
