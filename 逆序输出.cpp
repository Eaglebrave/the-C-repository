#include <iostream>
using namespace std;
int main()
{int n,i,x[100];
cin>>n;
for(i=1;i<=n;i++)
cin>>x[i];
for(i=n;i!=0;i--)
cout<<x[i]<<" ";
cout<<endl;
return 0;}