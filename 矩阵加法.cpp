#include <bits/stdc++.h>
using namespace std;
int main()
{int n,m,a[101][101],b[101][101],s[101][101],i,j;
cin>>n>>m;
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
cin>>a[i][j];
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
cin>>b[i][j];
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
s[i][j]=a[i][j]+b[i][j];
for(i=1;i<=n;i++)
{for(j=1;j<=m;j++)
cout<<s[i][j]<<" "; 
cout<<endl;}
return 0;}
