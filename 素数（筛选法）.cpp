#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,i,j,s=0;
bool a[110001];
cin>>n;
for(i=0;i<=110000;i++)
a[i]=true;
a[1]=false;
for(i=2;i<=110000;i++)
{if(a[i])for(j=2;i*j<=110000;j++)
{a[i*j]=false;}}
i=0;
while(s!=n)
{i++;
if(a[i]==true){cout<<i<<" ";
s++;}}}
