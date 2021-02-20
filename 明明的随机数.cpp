#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{int n,x,i,max=0;
cin>>n;
for(i=1;i<=n;i++)
{cin>>x;
a[x]=1;
if(max<x)max=x;}
for(i=1;i<=max;i++)
if(a[i]==1)cout<<i<<" ";}
