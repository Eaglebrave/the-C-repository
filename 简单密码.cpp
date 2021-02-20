#include <bits/stdc++.h>
using namespace std;
int main()
{int i;
char a[200];
gets(a);
for(i=0;i<strlen(a);i++)
{
if(a[i]>='A'&&a[i]<='Z'){

if(a[i]>='F')a[i]-=5;
else a[i]+=21;
}}
puts(a);
return 0;
}
