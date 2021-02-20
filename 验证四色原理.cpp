#include<bits/stdc++.h>
using namespace std;
const int N=30;
int n,c[30][30],t[30];
int isValid(int p)
{for (int i=1;i<=n;i++)
{if(p==i||c[i][p]==0||t[i]==0)
continue;
if (t[i]==t[p])
return 0;}
return 1;}
void dfs(int p)
{if(p>n)
{for (int i=1;i<n;i++) 
printf("%d",t[i]);
printf("%d\n",t[n]);
exit(0);}
else {for (int i=1;i<=4;i++)
{t[p]=i;
if (!isValid(p))continue;
dfs(p+1);}
t[p]=0;}
}
int main()
{cin>>n;
for (int i=1;i<=n;i++)
for (int j=1;j<=n;j++)
scanf("%d",&c[i][j]);
dfs(1);
return 0;}
