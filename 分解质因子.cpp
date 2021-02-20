#include <bits/stdc++.h>
using namespace std;
bool flag=true;
void zyz(int n,int s)
{if(n!=0){if(n%s==0){
if(flag){cout<<s;
flag=false;}
else cout<<"*"<<s;
n/=s;}
else s++;
zyz(n,s);}}
int main()
{int n;
cin>>n;
cout<<n<<"=";
zyz(n,2);
return 0;}
