#include <bits/stdc++.h>
using namespace std;
int f1(int a)
{int i,s=0;
for(i=1;i<=a-1;i++)
{if(a%i==0)s+=i;}
if(s==a)return 1;
else return 0;}
int main()
{int n,i,s;
cin>>n;
for(i=1;i<=n;i++)
if(f1(i)==1)cout<<i<<endl;
return 0;}
