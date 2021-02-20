#include<bits/stdc++.h>
using namespace std;
int w[102],b[102];
int n,s,t;
void dfs(int dep,int x,int y)
{if(y==s)
{for(int i=1;i<=x-1;i++)printf("%d ",b[i]);
printf("%d\n",b[x]);
t++;
exit(0);}
else if(y>s) return;
else if(dep>n) return;
else {b[x+1]=w[dep];
dfs(dep+1,x+1,y+w[dep]);
dfs(dep+1,x,y);
}}
int main(){
scanf("%d %d",&n,&s);
for(int i=1;i<=n;i++)scanf("%d",&w[i]);
dfs(1,0,0);
if(t==0) printf("no answer!");
return 0;}

