#include <bits/stdc++.h>
using namespace std;
int main()
{int a,b,l;
cin>>a>>b>>l;
int k1=1000000;
int k2=1;
int min=abs(k1*b-k2*a);
for(int i=1;i<=l;i++)
for(int j=l;j>=1;j--)
if((i*b>=j*a)&&(abs(i*b-j*a)<min))
{k1=i;
k2=j;
min=abs(i*b-j*a);}
cout<<k1<<" "<<k2<<endl;
return 0;
}
