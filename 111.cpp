#include <iostream>
using namespace std;
int main()
{long L,R,s=0,i;
cin>>L>>R;
for(i=L;i<=R;i++)
{L=i;
while(L>0)
{if(L%10==2)s++;
L/=10;}}
cout<<s<<endl;
return 0;}