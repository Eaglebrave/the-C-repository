#include <bits/stdc++.h>
using namespace std;
long long jc(int n)
{if(n==1)return 1;
return jc(n-1)*n;}
int main()
{int n;
cin>>n;
cout<<jc(n)<<endl;
return 0;}
