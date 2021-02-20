#include <bits/stdc++.h>
using namespace std;
int main()
{int a[6][6],i,j,max,min,flag=0;
for(i=1;i<=5;i++)
for(j=1;j<=5;j++)
cin>>a[i][j];
for(i=1;i<=5;i++){
max=a[i][1];
for(j=1;j<=5;j++)
{if(max<a[i][j])max=a[i][j];}
a[i][0]=max;}
for(i=1;i<=5;i++){
min=a[1][i];
for(j=1;j<=5;j++)
{if(min>a[j][i])min=a[j][i];}
a[0][i]=min;}
for(i=1;i<=5;i++)
{for(j=1;j<=5;j++)
{if(a[i][0]==a[0][j]){flag++;
cout<<i<<" "<<j<<" "<<a[i][j]<<" ";}}}
if(flag==0)cout<<"not found"<<endl;
return 0;}
