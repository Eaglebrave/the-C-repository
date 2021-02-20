#include <bits/stdc++.h>
using namespace std;
int a[101][101],b[101],f[101],k[101];
int n,x,y,front,rear,tx;
int main()
{cin>>n>>x>>y;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)cin>>a[i][j];
front=1;rear=1;
f[1]=x;k[1]=0;b[x]=1;
while(front<=rear)
{tx=f[front];
if(tx==y)
{printf("%d\n",k[front]-1);
break;}
for(int i=1;i<=n;i++)
if(a[i][tx]==1&&(b[i]==0))
{rear++;
f[rear]=i;
b[i]=1;
k[rear]=k[front]+1;}
front++;
}
}
