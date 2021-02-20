#include <iostream>
using namespace std;
int main()
{int apple[11],h,i,s=0;
for(i=1;i<=10;i++)
cin>>apple[i];
cin>>h;
h+=30;
for(i=1;i<=10;i++)
if(apple[i]<=h)s++;
cout<<s<<endl;
return 0;}