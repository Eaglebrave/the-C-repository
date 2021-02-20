#include <bits/stdc++.h>
using namespace std;
int main()
{int dx[8]={-1,-1,0,1,1,1,0,-1},dy[8]={0,1,1,1,0,-1,-1,-1},n,m,i,j,ni,nj,k,sum[101][101]={0};
char mine[101][101];
cin>>n>>m;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>mine[i][j];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(mine[i][j]=='?')
for(k=0;k<8;k++)
{ni=i+dx[k];
nj=j+dy[k];
if(ni>=0&&ni<n&&nj>=0&&nj<m&&mine[ni][nj]=='*')
sum[i][j]++;}
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
if(mine[i][j]=='*')putchar('*');
else putchar(sum[i][j]+48);
putchar('\n');
}
return 0;}
