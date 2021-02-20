#include <bits/stdc++.h>
using namespace std;
int main()
{double a=2,b=1,s=0,n,i,c;
cin>>n;
for(i=1;i<=n;i++)
{s+=a*1.0/b;
c=a;
a=a+b;
b=c;}
cout<<fixed<<setprecision(4)<<s;}
