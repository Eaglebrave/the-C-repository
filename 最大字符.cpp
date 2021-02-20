#include <bits/stdc++.h>
using namespace std;
int main()
{char a[100],b[100],c[100],s[100];
gets(a);
gets(b);
gets(c);
if(strcmp(a,b)>=0)strcpy(s,a);
else strcpy(s,b);
if(strcmp(c,s)>=0)strcpy(s,c);
puts(s);
return 0;}
