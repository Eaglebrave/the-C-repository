#include <bits/stdc++.h>
using namespace std;
int main()
{int n,a[101][101],i,j;
cin>>n;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
a[i][j]=i;
for(i=n;i>=1;i--)
{for(j=1;j<=i;j++)
cout<<a[j][i]<<" ";
cout<<endl;}
return 0;}
