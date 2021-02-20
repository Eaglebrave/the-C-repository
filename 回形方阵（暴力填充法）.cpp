#include <bits/stdc++.h>
using namespace std;
int main()
{int a[50][50],n,i,j,k,s,x,y,flag;
cin>>n;
s=n*2+1;
x=1;
y=s;
flag=n+1;
for(i=1;i<=s;i++)
{flag--;
for(j=x;j<=y;j++)
for(k=x;k<=y;k++)
a[j][k]=flag;
x++;
y--;
}
for(i=1;i<=s;i++)
{for(j=1;j<=s;j++)
cout<<a[i][j]<<" ";
cout<<endl;}}
