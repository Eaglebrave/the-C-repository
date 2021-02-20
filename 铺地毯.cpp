#include <bits/stdc++.h>
using namespace std;
int a[10010][5];
int main()
{int n,x,y,b,c,y2,i,j,k,s=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>x>>y>>b>>c;
a[i][1]=x;
a[i][2]=y+c;
a[i][3]=x+b;
a[i][4]=y;}
cin>>x>>y;
for(i=1;i<=n;i++)
if(a[i][1]<=x&&a[i][2]>=y&&a[i][3]>=x&&a[i][4]<=y)s++;
if(s==0)cout<<-1<<endl;
else cout<<s<<endl;}
