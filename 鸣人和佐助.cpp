#include <bits/stdc++.h>
using namespace std;
struct node
{int r,c;
int t;
int level;}q[210];
int v[210][210][15]={0},m,n,t;char pp[210][210];
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int main()
{int r1,c1,r2,c2,front=1,rear=1;
cin>>m>>n>>t;
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{cin>>pp[i][j];
if(pp[i][j]=='@')
{r1=i;c1=j;}
if(pp[i][j]=='+')
{r2=i;c2=j;}}
v[r1][c1][t]=1;
q[front].r=r1;q[front].c=c1;
q[front].t=t;q[front].level=0;
while(front<=rear)
{node temp=q[front];
if(temp.r==r2&&temp.c==c2)
{cout<<temp.level;
return 0;}
for(int i=0;i<4;i++)
{node temp2;
temp2.r=temp.r+dir[i][0];
temp2.c=temp.c+dir[i][1];
if(temp2.r>=0&&temp2.r<m&&temp2.c>=0&&temp2.c<n)
{if(temp.t>=1&&pp[temp2.r][temp2.c]=='#'&&v[temp2.r][temp2.c][temp.t-1]==0)
{temp2.t=temp.t-1;
temp2.level=temp.level+1;
rear++;
q[rear].r=temp2.r;q[rear].c=temp2.c;
q[rear].t=temp2.t;q[rear].level=temp2.level;
v[temp2.r][temp2.c][temp2.t]=1;}
else if(pp[temp2.r][temp2.c]!='#'&&v[temp2.r][temp2.c][temp.t]==0)
{temp2.t=temp.t;
temp2.level=temp.level+1;
rear++;
q[rear].r=temp2.r;q[rear].c=temp2.c;
q[rear].t=temp2.t;q[rear].level=temp2.level;
v[temp2.r][temp2.c][temp2.t]=1;}
}}
front++;}
cout<<"-1"<<endl;
return 0;}
