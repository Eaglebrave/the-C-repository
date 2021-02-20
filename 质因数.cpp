#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,k=1;
cin>>n;
while(n!=1)
{k++;
while(n!=1&&n%k==0)
{cout<<k<<endl;
n/=k;}}}
