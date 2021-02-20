#include <iostream>
using namespace std;
int main()
{long n,i,lucky[14]={4,7,44,77,47,74,447,477,474,444,744,747,774,777};
cin>>n;
for(i=0;i<n;i++)
{if(n%lucky[i]==0){cout<<"YES"<<endl;
return 0;}}
cout<<"NO"<<endl;
return 0;}