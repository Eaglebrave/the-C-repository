#include <bits/stdc++.h>
using namespace std;
int main()
{int i;
char a[80];
gets(a);
for(i=0;i<strlen(a);i++)
{if(a[i]>='A'&&a[i]<='z'){
if(a[i]>='A'&&a[i]<='Y')a[i]++;
else if(a[i]=='Z')a[i]='A';
else if(a[i]>='a'&&a[i]<='y')a[i]++;
else if(a[i]=='z')a[i]='a';}
}
puts(a);
return 0;}
