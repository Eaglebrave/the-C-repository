#include <bits/stdc++.h>
using namespace std;
int main()
{int a[20][20],n,i,j,s;
cin>>n;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
a[i][j]=0;
s=n;
for(i=1;i<=n;i++){
a[i][s]=1;
s--;}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<setw(3)<<a[i][j]; 
cout<<endl;}
return 0;}
