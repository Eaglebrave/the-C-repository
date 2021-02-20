#include <bits/stdc++.h>
using namespace std;
bool a[52][52];
int dx[5],dy[5],q[3][2501];
int h,w,front,rear,x,y;
int main()
{cin>>h>>w;
char c;
for (int i=1;i<=w;i++)
{for (int j=1;j<=h;j++)
{cin>>c;
if(c=='.')a[i][j]=true;
else if(c=='@'){
	x=i;
	y=j;
	a[i][j]==false;
}}}
dx[1]=1;dx[2]=-1;dx[3]=0;dx[4]=0;
dy[1]=0;dy[2]=0;dy[3]=1;dy[4]=-1;
q[1][1]=x;q[2][1]=y;
front=1;rear=1;
while(front<=rear)
{for(int i=1;i<=4;i++)
{x=q[1][front]+dx[i];
y=q[2][front]+dy[i];
if(a[x][y])
{rear++;
q[1][rear]=x;
q[2][rear]=y;
a[x][y]=false;
}
}
front++;}
cout<<rear<<endl;
return 0;}
