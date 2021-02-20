#include <bits/stdc++.h>
using namespace std;
int zs(int n)
{int i,s=0;
for(i=1;i<=n;i++)
if(n%i==0)s++;
if(s==2)return 1;
else return 0;}
int main()
{int n,i,x=-1,flag=1;
cin>>n;
for(i=1;i<=n;i++)
{if(zs(i)==1){
if(i-x==2){
cout<<x<<" "<<i<<endl;
x=i;}
else x=i;}}
return 0;}
