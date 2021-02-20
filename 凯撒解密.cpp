#include <bits/stdc++.h>
using namespace std;
int main()
{char a[1000]={0};
int i,j,x,b;
cout<<"输入密文"<<endl;
cin>>a;
cout<<"输入移位数"<<endl;
cin>>x;
for(i=0;i<=strlen(a)-1;i++)
{for(j=1;j<=x;j++)
{if(a[i]=='A')a[i]=91;

a[i]--;
}}
for(i=0;i<=strlen(a)-1;i++)
cout<<a[i];
}
