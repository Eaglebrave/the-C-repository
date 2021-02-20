#include <bits/stdc++.h>
using namespace std;
int main()
{int s,h,i;
char a[100];
cin>>h>>s>>a;
for(i=0;i<strlen(a);i++)
{if(a[i]=='u'&&s>0)s--;
if(a[i]=='d'&&s<h)s++;}
cout<<s;}
