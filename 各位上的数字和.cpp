#include <bits/stdc++.h>
using namespace std;
int main()
{int i,s=0;
char a[200];
gets(a);
for(i=0;i<strlen(a);i++)
s+=(a[i]-'0');
cout<<s;
return 0;}
