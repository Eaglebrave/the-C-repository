#include <iostream>
using namespace std;
int main()
{int n,a[1001],i,j,s=0,flag;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n;i++)
{flag=0;
for(j=1;j<i;j++)
if(a[j]>a[i])flag++;
for(j=n;j>i;j--)
if(a[j]>a[i])flag++;
if(flag==2)s++;}
cout<<s<<endl;
return 0;}
