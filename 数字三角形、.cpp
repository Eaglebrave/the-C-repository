#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,j,a[101][101];
cin>>n;
for(i=1;i<=n;i++)
for(j=1;j<=i;j++)
cin>>a[i][j];
for(i=n-1;i<=n;i--)
for(j=1;j<=i;j++)
{if(a[i+1][j]>=a[i+1][j+1])a[i][j]+=a[i+1][j];
else a[i][j]+=a[i+1][j+1];
}
cout<<a[1][1]<<endl;
}
