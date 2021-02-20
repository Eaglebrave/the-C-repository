#include <bits/stdc++.h>
using namespace std;
int main()
{int a,b,s,n,i;
cin>>a>>b>>n;
for(i=1;i<=n+1;i++)
{s=a/b;
a%=b;
a*=10;}
a/=10;
cout<<s;}
