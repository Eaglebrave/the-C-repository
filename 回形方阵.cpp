#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int a[10][10],n,n1,i,j,j1=1,k;
cin>>n;
n1=n;
k=(n+1)/2;
for(i=1;i<=k;i++)
{for(j=j1;j<=n;j++)
{a[j][j1]=j1;
a[j1][j]=j1;
a[j][n]=j1;
a[n][j]=j1;
}j1++;
n--;}
for(i=1;i<=n1;i++)
{for(j=1;j<=n1;j++)
cout<<setw(2)<<a[i][j]<<" ";
cout<<endl;}
return 0;}
