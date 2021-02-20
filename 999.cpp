#include <iostream>
using namespace std;
int main()
{int n[11],i,max,s=1;
for(i=1;i<=10;i++)
cin>>n[i];
max=n[1];
for(i=2;i<=10;i++)
{if(max<n[i]){
max=n[i];
s=i;}}
cout<<max<<" "<<s<<endl;
return 0;}