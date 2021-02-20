#include <bits/stdc++.h>
using namespace std;
int main()
{int a,b,x[101][101],i,j;
cin>>a>>b;
for(i=1;i<=a;i++)
for(j=1;j<=b;j++)
cin>>x[i][j];
for(i=1;i<=b;i++)
{for(j=a;j>=1;j--)
cout<<x[j][i]<<" ";
cout<<endl;}
return 0;}
