#include <bits/stdc++.h>
using namespace std;
int main()
{int a[101][101]={0},n,i,j;
cin>>n;
for(i=1;i<=n;i++)
for(j=i;j<=n;j++)
a[i][j]=j-i+1;
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
if(!a[i][j])cout<<setw(5)<<" ";
else cout<<setw(5)<<a[i][j];
cout<<endl;}
}
