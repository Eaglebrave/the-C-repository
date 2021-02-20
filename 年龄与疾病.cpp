#include <bits/stdc++.h>
using namespace std;
int main()
{int a[101],n,i,w=0,x=0,y=0,z=0;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n;i++)
{if(a[i]>=0&&a[i]<=18)w++;
if(a[i]>=19&&a[i]<=35)x++;
if(a[i]>=36&&a[i]<=60)y++;
if(a[i]>=61)z++;
}
cout<<fixed<<setprecision(2)<<w*1.0/n*100<<"%"<<endl;
cout<<fixed<<setprecision(2)<<x*1.0/n*100<<"%"<<endl;
cout<<fixed<<setprecision(2)<<y*1.0/n*100<<"%"<<endl;
cout<<fixed<<setprecision(2)<<z*1.0/n*100<<"%"<<endl;
}
