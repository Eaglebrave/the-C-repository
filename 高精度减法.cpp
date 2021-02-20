#include <bits/stdc++.h>
using namespace std;
char a1[100000],b1[100000];
int a[100000],b[100000],c[100000],i,j;
int main()
{cin>>a1>>b1;
memset(a,0,sizeof(a));
memset(a,0,sizeof(b));
for(i=0;i<strlen(a1);i++)
a[i]=a1[i]-'0';
for(i=0;i<strlen(b1);i++)
b[i]=b1[i]-'0';
j=strlen(b1);
for(i=strlen(a1)-1;i>=0;i--)
{j--;
if(a[i]-b[j]<0){a[i]+=10;
a[i-1]--;}
c[i]=a[i]-b[j];}
for(i=0;i<=strlen(a1)-1;i++)
if(a[i]!=0)cout<<c[i];}
