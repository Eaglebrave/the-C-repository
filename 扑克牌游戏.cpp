#include <bits/stdc++.h>
using namespace std;
int a[1010],b[1010];
int main()
{int n,k,p,front=0,tail,q=0,i,j,t;
cin>>n>>k>>p;
for(i=1;i<=k;i++)
a[i]=i;
tail=k;
for(int i=1;i<=k;i++){
for(j=1;j<=n;j++)
{front++;
if(j==n)b[++q]=a[front];
for(t=1;t<=p;t++)
{front++;
a[++tail]=a[front];}
}}
sort(b+1,b+p+1);
for(i=1;i<=k/n;i++)
cout<<b[i]<<endl;
return 0;}
