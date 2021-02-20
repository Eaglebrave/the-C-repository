#include <bits/stdc++.h>
using namespace std;
bool ss(int n)
{int i,s=0;
for(i=1;i<=n;i++)
if(n%i==0)s++;
if(s==2)return 1;
else return 0;}
int main()
{int a[110],i,j,k,top=0;
for(i=1;i<=100;i++)
if(ss(i)==true)a[++top]=i;
for(i=1;i<=top;i++)
{for(j=1;j<=top;j++)
{for(k=1;k<=top;k++)
{if((a[i]+a[j])/2.0==a[k]&&a[i]>a[j])cout<<a[j]<<" "<<a[k]<<" "<<a[i]<<endl;}}}}
