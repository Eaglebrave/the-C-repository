#include <bits/stdc++.h>
using namespace std;
int main()
{int i,s=0;
char a[100];
gets(a);
for(i=0;i<strlen(a);i++)
{if(a[i]!=' ')s++;}
cout<<s<<endl;
return 0;}
