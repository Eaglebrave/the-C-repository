#include <bits/stdc++.h>
using namespace std;
void fl(int,int);
int main()
{int n,k;
cin>>n>>k;
fl(n,k);
return 0;}
void fl(int n,int s)
{int i,a;
for(i=1;i<=s;i++)
{a=n%10;
n/=10;}
cout<<a;}
