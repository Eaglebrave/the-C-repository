#include <cstdio>
#include <iostream>
using namespace std;
int main()
{int n,i,x,q[102],d;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&q[i]);}
scanf("%d",&x);
for(i=x;i<n;i++)
{q[i]=q[i+1];}
n--;
for(i=1;i<n;i++)
{printf("%d ",q[i]);}
printf("%d\n",q[n]);
return 0;}
