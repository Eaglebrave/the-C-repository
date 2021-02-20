#include <bits/stdc++.h>
using namespace std;
int a[102][102],dx[5],dy[5],q[3][10001];
int n,m,ans,s,front,rear;
void bfs(int i,int j)
{front=1;rear=1;
q[1][1]=i;rear=1;
q[1][1]=i;q[2][1]=j;a[i][j]=0;
while(front <=rear)
{for(int w=1;w<=4;w++)
if(a[q[1][front]+dx[w]][q[2][front]+dy[w]]==1)
{rear++;
q[1][rear]=q[1][front]+dx[w];
q[2][rear]=q[2][front]+dy[w];
a[q[1][front]+dx[w]][q[2][front]+dy[w]]=0;
}
front++;
}
}
int main()
{cin>>n>>m;
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)cin>>a[i][j];
dx[1]=1;dy[1]=0;
dx[2]=0;dy[2]=1;
dx[3]=-1;dy[3]=0;
dx[4]=0;dy[4]=-1;
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
if(a[i][j]==1)
{bfs(i,j);
if(rear>ans)ans=rear;
}
cout<<ans<<endl;
return 0;
}
