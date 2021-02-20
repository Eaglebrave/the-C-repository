#include <bits/stdc++.h>
using namespace std;
int main()
{int flag=0,i;
char a[256];
gets(a);
for(i=0;a[i];i++)
if(a[i]>='0'&&a[i]<='9')flag++;
cout<<flag;
return 0;}
