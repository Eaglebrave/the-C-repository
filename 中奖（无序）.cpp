#include<cstdio>
#include<iostream>
using namespace std;
int main()
{int n,i,num,f,g[101];
scanf("%d",&n);
for(i=1;i<=n;i++)scanf("%d",&g[i]);
scanf("%d",&num);
f=0;
for(i=1;i<=n;i++)
if(g[i]==num){f=i;break;}
printf("%d\n",f);
return 0;}