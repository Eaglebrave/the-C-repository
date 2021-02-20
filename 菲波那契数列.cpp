#include <iostream>
using namespace std;
int main()
{int a,b,n,k,c,d;
cin>>k;
d=k;
a=1;
b=1;
n=0;
k-=2;
c=0;
while(k>=1)
{n=a+b;
if(c==0){a=n;
c++;}
else{b=n;
c--;}
k--;}
if(d==1)cout<<1<<endl;
else if(d==2)cout<<1<<endl;
else cout<<n<<endl;
return 0;}
