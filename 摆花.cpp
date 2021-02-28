#include <bits/stdc++.h>
using namespace std;
int n,m,a[101],f[101][101];
const int M=1000007;
int main()
{cin>>n>>m;
for(int i=1;i<=n;i++)cin>>a[i];
f[0][0]=1;
for(int i=1;i<=n;i++)
for(int j=1;j<=m;j++)
for(int k=0;k<=min(a[i],j);k++)
f[i][j]=(f[i][j]+f[i-1][j-k])%M;
cout<<f[n][m]<<"\n";
return 0;
}
