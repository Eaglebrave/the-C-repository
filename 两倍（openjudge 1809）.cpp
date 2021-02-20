#include <bits/stdc++.h>
using namespace std;
int main()
{int a[17],i,j,k=0,s;
while(a[k])
cin>>a[++k];
k--;
for(i=1;i<=k;i++)
for(j=1;j<=k;j++)
if(i!=j&&a[i]*2==a[j])
s++;
cout<<s;}
