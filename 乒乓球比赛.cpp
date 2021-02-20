#include <bits/stdc++.h>
using namespace std;
int main()
{string com;
int a[10000]={0},b[10000]={0},k=0;
int a2[10000]={0},b2[10000]={0},k2=0;
while(true)
{cin>>com;
bool ed=false;
for(int i=0;i<=com.length();i++)
{if(com[i]=='E'){ed=true;
break;}
if(com[i]=='W'){a[k]++;
if((a[k]==11&&b[k]<=9)||(a[k]>11&&b[k]<=a[k]-2))k++;
a2[k2]++;
if((a2[k2]==21&&b2[k2]<=19)||(a2[k2]>21&&b2[k2]<=a2[k2]-2))k2++;}
if(com[i]=='L'){b[k]++;
if((b[k]==11&&a[k]<=9)||(b[k]>11&&a[k]<=b[k]-2))k++;
b2[k2]++;
if((b2[k2]==21&&a2[k2]<=19)||(b2[k2]>21&&a2[k2]<=b2[k2]-2))
k2++;}
}
if(ed)break;
}
for(int i=0;i<=k;i++)cout<<a[i]<<":"<<b[i]<<endl;
cout<<endl;
for(int i=0;i<=k2;i++)cout<<a2[i]<<":"<<b2[i]<<endl;
return 0;
}
