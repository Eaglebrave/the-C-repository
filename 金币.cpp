#include <bits/stdc++.h>
using namespace std;
int main()
{int i=1,k,j,t=1,s=0;
cin>>k;
while(i<=k)
{for(j=1;j<=t;j++)
{s+=t;
i++;
if(i>k)break;}
t++;}
cout<<s<<endl;
return 0;}
