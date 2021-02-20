#include <bits/stdc++.h>
using namespace std;
int m,n,r,s,a[100][100],b[100][100];
int f(int x,int y)
{int i,j,sum=0;
for(i=x;i<=x+r-1;i++)
for(j=y;j<=y+s-1;j++)
sum+=abs(a[i][j]-b[i+1-x][j+1-y]);
return sum;}
int main()
{int i,j,x,y,min=100000;
cin>>m>>n;
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
cin>>r>>s;
for(i=1;i<=r;i++)
for(j=1;j<=s;j++)
cin>>b[i][j];
for(i=1;i<=m+1-r;i++)
for(j=1;j<=n+1-s;j++)
if(f(i,j)<min){min=f(i,j);x=i;y=j;}
for(i=x;i<=x+r-1;i++)
{for(j=y;j<=y+s-1;j++)
cout<<a[i][j]<<" ";
cout<<endl;}
return 0;}
