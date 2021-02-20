#include <bits/stdc++.h>
using namespace std;
int a[1010],b[1010];
int main()
{int n,m,k,t1,t2;
cin>>m>>n>>k;
for(int i=1;i<=m;i++)
a[i]=i;
for(int i=1;i<=n;i++)
b[i]=i;
t1=m;t2=n;
int x=0,y=0;
for(int i=1;i<=k;i++)
{x++;y++;
cout<<a[x]<<" "<<b[y]<<endl;
t1++;
a[t1]=a[x];
t2++;
b[t2]=b[y];}
return 0;
}
