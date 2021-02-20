#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,j;
char a[20];
cin>>n;
for(i=1;i<=n;i++)
{cin>>a;
if(a[0]>='a'&&a[i]<='z')a[0]-=32;
for(j=1;j<=strlen(a);j++)
{if(a[j]>='A'&&a[j]<='Z')a[j]+=32;
}
puts(a);
}
return 0;}
