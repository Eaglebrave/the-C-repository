#include <bits/stdc++.h>
using namespace std;
int main()
{int n,a[110],x=-1,y=0,z=1,i,j,k;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n-1;i++)
{x++;y++;z++;
if(a[y]>a[x]&&a[y]>a[z])cout<<a[y]<<endl;}}
