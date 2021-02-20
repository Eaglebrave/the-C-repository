#include <bits/stdc++.h>
using namespace std;
int gcd(int m,int n)
{if(n==0)return m;
else return gcd(n,m%n);}
int main()
{int m,n;
cin>>m>>n;
cout<<gcd(m,n)<<endl;
return 0;}
