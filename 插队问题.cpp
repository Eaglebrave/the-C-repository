#include <iostream>
using namespace std;
int main()
{int n[101],s,i,x,c,b;
cin>>s;
for(i=1;i<=s;i++)
cin>>n[i];
cin>>x;
c=n[s];
b=x;
for(i=s;i>b;i--)
{n[i]=n[i-1];}
n[x]=c;
for(i=1;i<=s;i++)
{cout<<n[i]<<" ";}
cout<<endl;
return 0;}