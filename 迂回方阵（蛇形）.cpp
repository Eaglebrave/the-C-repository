#include <bits/stdc++.h>
using namespace std;
int main()
{int n,a[21][21]={0},i,j,x,y,o=0;
cin>>n;
x=n;
y=1;
for(i=1;i<=n;i++)
{
if(i%2==1){for(j=1;j<=i-1;j++){o++;a[x][y]=o;x--;}for(j=1;j<=i-1;j++){o++;a[x][y]=o;y--;}o++;a[x][y]=o;x--;a[x][y]=o;}
if(i%2==0){for(j=1;j<=i-1;j++){o++;a[x][y]=o;y++;}for(j=1;j<=i-1;j++){o++;a[x][y]=o;x++;}o++;a[x][y]=o;y++;a[x][y]=o;}
}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<setw(5)<<a[i][j]; 
cout<<endl;}return 0;}
