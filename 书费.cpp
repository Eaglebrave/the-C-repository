#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{int y[11],i;
double x[11]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},s=0;
for(i=1;i<=10;i++)
cin>>y[i];
for(i=1;i<=10;i++)
s+=x[i]*y[i];
cout<<s<<endl;
return 0;}