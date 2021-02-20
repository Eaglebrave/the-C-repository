#include <bits/stdc++.h>
using namespace std;
long long jc(int n)
{if(n==1)return 1;
return jc(n-1)*n;}
int main()
{double n,s=0,i,x=0;
cin>>n;
for(i=1;i<=n;i++)
{x++;
s+=1.0/jc(x);
}
cout<<fixed<<setprecision(10)<<s+1;}
