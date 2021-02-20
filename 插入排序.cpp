#include<iostream>
using namespace std;
int main()
{int n,i,j,k,temp,h[101];
cin>>n;
for(i=1;i<=n;i++)
cin>>h[i];
for(i=2;i<=n;i++)
{temp=h[i];
k=1;
while(h[k]<=temp&&k<i)
k++;
for(j=i-1;j>=k;j--)
h[j+1]=h[j];
h[k]=temp;}
for(i=1;i<=n;i++)
cout<<h[i]<<endl;
return 0;}