#include <bits/stdc++.h>
using namespace std;
int main()
{int i,j,k,n,s=0;
cin>>n;
for (i=0;i<=n;i++)
for (j=0;j<=n;j++)
for (k=0;k<=n;k++)
if((i+j)%2==0&&(j+k)%3==0&&(i+j+k)%5==0&&s<(i+j+k))s=(i+j+k);
cout<<s;
}
