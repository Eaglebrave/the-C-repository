#include <bits/stdc++.h>
using namespace std;
int a[20]={0,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17},flag=1;
int main()
{int n,i,j,x,y,x1=0,y1=0,xs=-1,ys=0;
cin>>n;
x=(n+1)/2;
y=(n-1)/2;
while(xs!=ys)
{xs=0;ys=0;
for(i=1;i<=n;i++)
a[i]++;
for(i=1;i<=x;i++)
xs+=pow(a[i],2);
for(j=i;j<=n;j++)
ys+=pow(a[j],2);}
for(i=1;i<=n;i++)
cout<<a[i]<<" ";}
