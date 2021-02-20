#include <bits/stdc++.h>
using namespace std;
int zdz(int a,int b,int c,int d,int e)
{if(a>b&&a>c&&a>d&&a>e)return a;
if(b>a&&b>c&&b>d&&b>e)return b;
if(c>a&&c>b&&c>d&&c>e)return c;
if(d>a&&d>b&&d>c&&d>e)return d;
if(e>a&&e>b&&e>c&&e>d)return e;
}
int zxz(int a,int b,int c,int d,int e)
{if(a<b&&a<c&&a<d&&a<e)return a;
if(b<a&&b<c&&b<d&&b<e)return b;
if(c<a&&c<b&&c<d&&c<e)return c;
if(d<a&&d<b&&d<c&&d<e)return d;
if(e<a&&e<b&&e<c&&e<d)return e;
}
int main()
{int a[6][6],i,j;
bool flag;
flag=false;
for(i=1;i<=5;i++)
for(j=1;j<=5;j++)
cin>>a[i][j];
a[1][0]=zdz(a[1][1],a[1][2],a[1][3],a[1][4],a[1][5]);
a[2][0]=zdz(a[2][1],a[2][2],a[2][3],a[2][4],a[2][5]);
a[3][0]=zdz(a[3][1],a[3][2],a[3][3],a[3][4],a[3][5]);
a[4][0]=zdz(a[4][1],a[4][2],a[4][3],a[4][4],a[4][5]);
a[5][0]=zdz(a[5][1],a[5][2],a[5][3],a[5][4],a[5][5]);
a[0][1]=zxz(a[1][1],a[2][1],a[3][1],a[4][1],a[5][1]);
a[0][2]=zxz(a[1][2],a[2][2],a[3][2],a[4][2],a[5][2]);
a[0][3]=zxz(a[1][3],a[2][3],a[3][3],a[4][3],a[5][3]);
a[0][4]=zxz(a[1][4],a[2][4],a[3][4],a[4][4],a[5][4]);
a[0][5]=zxz(a[1][5],a[2][5],a[3][5],a[4][5],a[5][5]);
for(i=1;i<=5;i++)
for(j=1;j<=5;j++)
if(a[i][0]==a[0][j]){cout<<i<<" "<<j<<" "<<a[i][0]<<" ";
flag=true;}
if(flag==false)cout<<"not found";
return 0;}
