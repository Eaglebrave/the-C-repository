#include <bits/stdc++.h>
using namespace std;
int main()
{int n,d,i,j,k,a[10][10]={0},b[10][10]={0};
cin>>n>>d;
a[5][5]=n;
for(k=1;k<=d;k++)
{for(i=1;i<=9;i++)
for(j=1;j<=9;j++)
b[i][j]=0;
for(i=1;i<=9;i++)
{for(j=1;j<=9;j++)
{if(a[i][j]>0){
a[i][j]--;
b[i][j-1]++;
b[i][j]+=2;
b[i-1][j]++;
b[i-1][j-1]++;
b[i+1][j]++;
b[i][j+1]++;
b[i+1][j+1]++;
b[i-1][j+1]++;
b[i+1][j-1]++;
j--;
if(j==0){j++;
i--;}
}}}
for(i=1;i<=9;i++)
for(j=1;j<=9;j++)
a[i][j]=b[i][j];}
for(i=1;i<=9;i++)
{for(j=1;j<=9;j++)
cout<<b[i][j]<<" ";
cout<<endl;}
return 0;}
