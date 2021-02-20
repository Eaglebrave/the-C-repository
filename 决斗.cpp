#include <bits/stdc++.h>
using namespace std;
int a[1010][1010],flag;
int main()
{int n,m,x,y,i,j,winer=1;
cin>>n>>m;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
x=m;
if(m+1>n)y=1;
else y=m+1;
flag=n;
while(flag!=1)
{if(a[x][y]==0){winer=y;
if(x-1<1)x=n;
else x--;}
else {winer=x;
if(y+1>n)y=1;
else y++;}
flag--;}
cout<<winer<<endl;}
