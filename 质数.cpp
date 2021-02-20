#include <iostream>
#include <iomanip>
using namespace std;
int main()
{long n=0,s=0,i,a=1,p,x=0;
cin>>p;
while(a<=p)
{for(i=1;i<=n;i++)
if(n%i==0)s++;
if(s==2){a++;
x=n;}
s=0;
n++;
cout<<a<<"/"<<p<<endl;}
cout<<x<<endl;
return 0;}