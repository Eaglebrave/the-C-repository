#include <bits/stdc++.h>
using namespace std;
void sj(int,char);
int main()
{int n;
char a;
cin>>n>>a;
sj(n,a);
return 0;}
void sj(int n,char a)
{int i,j;
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
cout<<a;
cout<<endl;}}
