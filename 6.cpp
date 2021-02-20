#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,s=0;
cin>>n;
while(n)
{s*=10;
s+=n%10;
n/=10;}
cout<<s;}
