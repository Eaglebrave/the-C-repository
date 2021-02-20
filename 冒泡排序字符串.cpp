#include <bits/stdc++.h>
using namespace std;
int main()
{char s[100],*p,*q;
cin>>s;
for(p=s;*(p+1);p++)
for(q=p+1;*q;q++)
if(*p>*q){char t;
t=*p;
*p=*q;
*q=t;}
cout<<s;}
