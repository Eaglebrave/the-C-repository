#include <bits/stdc++.h>
using namespace std;
int main()
{int a[100010],n,m,i,j,x,y,k,top=0;
double b[100010],s=0,max=0;
cin>>n>>m;
for(i=1;i<=n;i++)
cin>>a[i];
x=1;
y=m;
k=n-m;
for(i=1;i<=k+1;i++)
{s=0;
for(j=x;j<=y;j++)
s+=a[j];
b[++top]=s/(double)m;
x++;
y++;
}
for(i=1;i<=n-m+1;i++)
if(b[i]>max)max=b[i];
cout<<fixed<<setprecision(2)<<max;
}
