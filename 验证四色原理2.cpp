#include<bits/stdc++.h>
using namespace std;
const int N=30;
int n, a[N][N], h[N],v[N],top=0;
void dfs(int x) {
h[x]= 1;
v[++top]=x;
for (int i= 1;i <=n; i++)
if (a[x][i]&&h[i] == 0) dfs(i);}
int main()
{cin>>n; 
for(int i=1;i<=n; i++)
for (int j=1;j<=n; j++)
scanf("%d", &a[i][j]);
for (int i=1;i<=n;i++)
{if (h[i])continue; 
dfs(i); }
for (int i=1;i< n; i++)
printf("%d-", v[i]);
printf("%d\n",v[n]);
return 0;}
