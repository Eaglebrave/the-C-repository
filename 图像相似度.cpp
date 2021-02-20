#include <bits/stdc++.h>
using namespace std;
int main()
{int a[101][101],b[101][101],i,j,n,m,flag=0;
double s;
cin>>n>>m;
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
cin>>a[i][j];
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
cin>>b[i][j];
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
if(a[i][j]==b[i][j])flag++;
s=flag*1.0/(n*m)*100;
cout<<fixed<<setprecision(2)<<s;
return 0;}
