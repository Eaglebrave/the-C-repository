#include <bits/stdc++.h>
using namespace std;
int main()
{char a[100],i;
gets(a);
for(i=0;i<strlen(a);i++)
{if(a[i]>=97&&a[i]<=122)a[i]-=32;}
puts(a);
return 0;
}
