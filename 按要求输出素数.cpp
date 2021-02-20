#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,m,i,j,s=0,flag=0;
bool a[110001];
cin>>n>>m;
for(i=0;i<=110000;i++)
a[i]=true;
a[1]=false;
for(i=2;i<=110000;i++)
{if(a[i])for(j=2;i*j<=110000;j++)
{a[i*j]=false;}}
i=0;
while(i!=110000)
{i++;
if(a[i]==true){s++;
if(s>=n&&s<=m){
if(flag==0)cout<<i;
else cout<<" "<<i;
flag++;}
if(flag==10){flag=0;
cout<<endl;}}}}
