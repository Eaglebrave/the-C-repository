#include <bits/stdc++.h>
using namespace std;
int b,p,k;
int pow_mod(int a,int n,int k)
{if(n==0)return 1%k;
if(n==1)return a%k;
int y=pow_mod(a,n/2,k);
if(n%2==0)return (y*y)%k;
else return (((y*y)%k)*a)%k;
}
int main()
{cin>>b>>p>>k;
b=b%k;
cout<<pow_mod(b,p,k)<<endl;
return 0;
}
