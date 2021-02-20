#include <bits/stdc++.h>
using namespace std;
int s[21],n;
bool u[21],f1[41],f2[41],flag;
void pr(int d)
{flag=true;
for(int i=1;i<=n-1;i++)printf("%d ",s[i]);
printf("%d\n",s[n]);}
void dfs(int dep)
{if(dep>n)pr(dep-1);
else {for(int i=1;i<=n;i++)
{if((u[i]==false)&&(f1[dep+i]==false)&&(f2[dep-i+20]==false))
{u[i]=true;f1[dep+i]=true;f2[dep-i+20]=true;
s[dep]=i;
dfs(dep+1);
u[i]=false;f1[dep+i]=false;f2[dep-i+20]=false;}
}}}
int main(){
cin>>n;
dfs(1);
if(flag==false)printf("no solute!");
return 0;}
