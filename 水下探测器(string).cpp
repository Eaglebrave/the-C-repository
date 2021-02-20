#include <bits/stdc++.h>
using namespace std;
int main()
{int i,h,s;
string a;
cin>>h>>s>>a;
for(i=0;i<a.size()+1;i++)
{if(a.substr(i,1)=="u"&&s>0)s--;
if(a.substr(i,1)=="d"&&s<h)s++;}
cout<<s;}
