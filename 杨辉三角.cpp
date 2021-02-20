#include <bits/stdc++.h>
using namespace std;
int main(){ 
int i,j,a[21][21],n;
cin>>n;
for(i=1;i<=n;i++)
{a[i][1]=1;a[i][i]=1;
for(j=2;j<i;j++)
a[i][j]=a[i-1][j]+a[i-1][j-1];}
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
cout<<setw(6)<<a[i][j];
cout<<endl;}
return 0;}
