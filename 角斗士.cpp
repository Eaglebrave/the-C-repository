#include <bits/stdc++.h>
using namespace std;
const int N=1001;
int vs[N][N];
int main()
{int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
{char t;
cin>>t;
vs[i][j]=t-'0';}
int a,b;
a=m;
b=m==n?1:m+1;
int win=m;
for(int i=1;i<n;i++)
{if(vs[a][b]==1)
{b++;if(b>n)b=1;
win=a;}
else
{a--;
if(a<1)a=n;win=b;
}
}
cout<<win;
return 0;
}
