#include <bits/stdc++.h>
using namespace std;
int main()
{int n,m,x,a[110],i,*p,s=0;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
cin>>m>>x;
p=a;
for(i=1;i<=n;i++)
{if(abs(*p-m)<=x)s++;
p++;}
cout<<s;}
