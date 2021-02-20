#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i=1,j,k=1,a[10][10];
cin>>n;
j=n/2+1;
a[i][j]=k;
while(++k<=n*n)
{if(k%n==1)
i++;
else {i--;
j++;
if(i==0)i=n;
if(j==n+1)j=1;
}
a[i][j]=k;
}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<setw(4)<<a[i][j];
cout<<endl;}
return 0;}
