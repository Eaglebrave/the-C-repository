#include <bits/stdc++.h>
using namespace std;
const int N=110,INF=1<<30;
int a[N][N],dp[N],n;
int main()
{scanf("%d",&n);
for(int i=1;i<=n;++i)
for(int j=1;j<=n;++j)
scanf("%d",&a[i][j]);
for(int i=2;i<=n;++i)dp[i]=INF;
for(int i=2;i<=n;++i)
for(int j=1;j<i;++j)
if(a[i][j])dp[i]=min(dp[i],dp[j]+a[i][j]);
printf("%d\n",dp[n]);
return 0;}
