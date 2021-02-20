#include <bits/stdc++.h>
using namespace std;
#define M 10000
string a,b;
int gcd(int a,int b)
{if(b==0)return a;
else return gcd(b,a%b);}
int main()
{while(1)
{cin>>a;
if(a=="-1")break;
cin>>b;
int la=a.size(),lb=b.size(),max=0,temp;
for(int i=0;i<la;i++)
{temp=0;
for(int j=0,k=i;j<lb&&k<la;j++,k++)
if(a[j]==b[k])temp++;
if(max<temp)max=temp;}
max*=2;
printf("appx(%s,%s)=",a.c_str(),b.c_str());
if(max==0){printf("0\n");continue;}
temp=gcd(la+lb,max);
printf("%d/%d\n",max/temp,(la+lb)/temp);}
return 0;}
