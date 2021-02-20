#include <bits/stdc++.h>
using namespace std;
int main()
{int i;
string a,b;
getline(cin,b);
getline(cin,a);
if(a.find(b)==-1&&b.find(a)==-1)cout<<"No substring";
else if(a.find(b)==-1){cout<<a<<" is substring of "<<b;}
else {cout<<b<<" is substring of "<<a;}}
