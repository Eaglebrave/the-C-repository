#include <bits/stdc++.h>
using namespace std;
int main()
{int a[21][21]={0},i,j,x,y,o=0,n;
cin>>n;
x=n;
y=1;
for(i=n;i>0;i--)
{for(j=1;j<=n+1-i;j++)
{o++;
a[x][y]=o;
y++;}
y--;
for(j=1;j<=n-i;j++)
{o++;
x++;
a[x][y]=o;}
x=i-1;
y=1;}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<setw(4)<<a[i][j]; 
cout<<endl;}return 0;}
