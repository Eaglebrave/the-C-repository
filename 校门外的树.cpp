#include <bits/stdc++.h>
using namespace std;
int main()
{int l,m,i,x,y,j,flag=0;
bool a[10001];
for(i=0;i<=10001;i++)
a[i]=true;
cin>>l>>m;
for(i=1;i<=m;i++)
{cin>>x>>y;
for(j=x;j<=y;j++)
a[j]=false;
}
for(i=0;i<=l;i++)
{if(a[i]==true)flag++;
}
cout<<flag;
return 0;}
