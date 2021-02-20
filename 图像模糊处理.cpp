#include <bits/stdc++.h>
using namespace std;
int main()
{int n,m,a[101][101],b[101][101],i,j,s;
cin>>n>>m;
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
cin>>a[i][j];
for(i=1;i<=n;i++){
for(j=1;j<=m;j++)
if(i==1||j==1||i==n||j==m)cout<<a[i][j]<<" ";
else{s=round((a[i-1][j]+a[i+1][j]+a[i][j]+a[i][j-1]+a[i][j+1])*1.0/5);
cout<<s<<" ";}
cout<<endl;}
return 0;}
