#include <bits/stdc++.h>
using namespace std;
int main()
{int n,a[1001],i,j=0,x=0,y,max=0;//s为和，x为当前个数 
double s=0;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n;i++)
{if(a[i]%5==0)
if(a[i]%2==0){x++;
s+=a[i];
}}
if(x==0)cout<<"N"<<" ";
else cout<<s<<" ";
//
x=0;
s=0;
for(i=1;i<=n;i++)
{if(a[i]%5==1){j++;
x++;
if(j%2==1)s+=a[i];
else s-=a[i];}}
if(x==0)cout<<"N"<<" ";
else cout<<s<<" ";
//
x=0;
s=0;
for(i=1;i<=n;i++)
if(a[i]%5==2)x++;
if(x==0)cout<<"N"<<" ";
else cout<<x<<" ";
//
x=0;
s=0;
for(i=1;i<=n;i++)
{if(a[i]%5==3){x++;
s+=a[i];}}
if(x==0)cout<<"N"<<" ";
else cout<<fixed<<setprecision(1)<<s*1.0/x<<" ";
//
x=0;
s=0;
for(i=1;i<=n;i++)
{if(a[i]%5==4){x++;
if(a[i]>max)max=a[i];
}
}
if(x==0)cout<<"N";
else cout<<max;}
