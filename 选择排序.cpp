#include<iostream>
using namespace std;
int main()
{int n,i,j,k,temp,h[101];
cin>>n;
for(i=1;i<=n;i++)
cin>>h[i];
for(i=1;i<=n;i++)
{k=i;
for(j=i+1;j<=n;j++)
if(h[j]<h[k])k=j;
temp=h[i];
h[i]=h[k];
h[k]=temp;}
for(i=1;i<=n;i++)
cout<<h[i]<<endl;
return 0;}