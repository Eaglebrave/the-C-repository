#include <bits/stdc++.h>
using namespace std;
int main()
{int i;
char a[255];
gets(a);
for(i=0;i<strlen(a);i++)
{if(a[i]=='A')cout<<'T';
if(a[i]=='T')cout<<'A';
if(a[i]=='G')cout<<'C';
if(a[i]=='C')cout<<'G';
}
return 0;
}
