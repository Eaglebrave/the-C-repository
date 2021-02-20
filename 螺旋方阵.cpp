#include <bits/stdc++.h>
using namespace std;
int main()
{int i=1,j=1,n,a[20][20]={0},k=1;
cin>>n;
a[i][j]=k++;
while(k<=n*n)
{while(j+1<=n&&a[i][j+1]==0)a[i][++j]=k++;
while(i+1<=n&&a[i+1][j]==0)a[++i][j]=k++;
while(j-1>=1&&a[i][j-1]==0)a[i][--j]=k++;
while(i-1>=1&&a[i-1][j]==0)a[--i][j]=k++;}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<setw(4)<<a[i][j];
cout<<endl;
}
return 0;}
