#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int n,score,a,c;
double b;
cin>>n;
c=n;
a=0;
while(n>=1)
{cin>>score;
a+=score;
n--;}
b=a/(c*1.0);
cout<<fixed<<setprecision(2)<<b<<endl;
return 0;}
