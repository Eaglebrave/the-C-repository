#include <iostream>
using namespace std;
int main()
{int n,i,s;
long a;
cin>>a>>n;
s=a;
n--;
for(i=1;i<=n;i++)
a*=s;
cout<<a<<endl;
return 0;}