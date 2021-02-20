#include <bits/stdc++.h>
using namespace std;
int main()
{int i,j,k,x[8]={-1,-1,0,1,1,1,0,-1},y[8]={0,1,1,1,0,-1,-1,-1},s,n,m;
char a[101][101],b[101][101];
cin>>n>>m;
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
cin>>a[i][j];
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
if(a[i][j]=='?'){s=0;
for(k=0;k<8;k++)
if(a[i+x[k]][j+y[k]]=='*')s++;
b[i][j]=s+='0';}
else b[i][j]='*';
for(i=1;i<=n;i++)
{for(j=1;j<=m;j++)
cout<<b[i][j];
cout<<endl;}
return 0;}
