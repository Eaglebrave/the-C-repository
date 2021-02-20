#include <iostream>
using namespace std;
int main()
{int a,b,o,i,j;
char p;
cin>>a>>b>>p>>o;
if(o==0){a-=2;
for(i=1;i<=b;i++)
{cout<<p;}
cout<<endl;
b-=2;
for(j=1;j<=a;j++)
{cout<<p;
for(i=1;i<=b;i++)
{cout<<" ";}
cout<<p;
cout<<endl;}
b+=2;
for(i=1;i<=b;i++)
{cout<<p;}
cout<<endl;
return 0;}
else{
for(i=1;i<=a;i++)
{for(j=1;j<=b;j++)
cout<<p;
cout<<endl;}
cout<<endl;}
return 0;}