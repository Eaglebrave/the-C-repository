#include <bits/stdc++.h>
using namespace std;
int main()
{int i,j,s,m,n,a[5][5];
for(i=0;i<5;i++)
for(j=0;j<5;j++)
cin>>a[i][j];
cin>>m>>n;
for(i=0;i<5;i++)
{s=a[m-1][i];
a[m-1][i]=a[n-1][i];
a[n-1][i]=s;
}
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
cout<<a[i][j]<<" ";
cout<<endl;}
}
