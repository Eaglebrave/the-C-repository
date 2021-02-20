#include <bits/stdc++.h>
using namespace std;
int main()
{int a[10][10],i,j,t=0,n,k;
cin>>n;
i=1;j=0;
for(k=1;k<=n;k++)
{while(j+1<=k)a[i][++j]=++t;
while(i-1>=1){a[--i][j]=++t;}
i=k+1;j=0;
}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<setw(4)<<a[i][j];
cout<<endl;}return 0;}
