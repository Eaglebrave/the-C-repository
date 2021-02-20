#include <iomanip>
#include <iostream>
using namespace std;
int main()
{int n,i;
double a,s;
cin>>n;
for(i=1;i<=n;i++)
{cin>>a;
s+=a;}
s/=n*1.0;
cout<<fixed<<setprecision(4)<<s<<endl;
return 0;}
