#include <iostream>
using namespace std;
int main()
{int n,a,b,i,s=0;
cin>>n;
for(i=1;i<=n;i++)
{if(i%7!=0){a=i%10;
b=i/10%10;
if(a!=7&&b!=7){s+=i*i;}
}}
cout<<s<<endl; 
return 0;}
