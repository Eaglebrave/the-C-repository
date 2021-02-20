#include <bits/stdc++.h>
using namespace std;
int main()
{int n,a[21][21]={0},i,j,x=1,y=1,k,o=0;
cin>>n;
for(i=1;i<=n;i++){
if(i%2==1){for(j=i;j>0;j--)
{o++;
a[j][i+1-j]=o;
}}
if(i%2==0){for(j=1;j<=i;j++)
{o++;
a[j][i+1-j]=o;}}}
for(i=n-1;i>0;i--)
{for(j=1;j<=n-i;j++)
{x=n-i+1;
y=n-j+1;
a[x][y]=n*n+1-a[n-x+1][n-y+1];}}
for(i=1;i<=n;i++){
for(j=1;j<=n;j++)
cout<<setw(4)<<a[i][j]; 
cout<<endl;}return 0;}
