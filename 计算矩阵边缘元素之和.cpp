#include <bits/stdc++.h>
using namespace std;
int main()
{int m,n,a[101][101],i,j,s=0;
cin>>m>>n;
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
if((i==1||i==m)||(j==1||j==n))s+=a[i][j];
cout<<s;
return 0;
}
