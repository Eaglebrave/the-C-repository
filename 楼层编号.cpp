#include <bits/stdc++.h>
using namespace std;
int s=0,m,t;
bool fl(int n)
{while(n)
{if(n%10==t)return 1;
n/=10;}
return 0;}
int main()
{cin>>m>>t;
for(int i=1;i<=m;i++)
if(fl(i)==1)s++;
cout<<s;}
