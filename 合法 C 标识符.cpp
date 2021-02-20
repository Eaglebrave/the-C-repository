#include <bits/stdc++.h>
using namespace std;
int main()
{int i;
char a[20];
gets(a);
if(a[0]>='0'&&a[0]<='9'){cout<<"no";
return 0;}
for(i=0;i<strlen(a);i++)
{if(a[i]>=48&&a[i]<=57||a[i]>=65&&a[i]<=122||a[i]==95);
else {cout<<"no";
return 0;}
}
cout<<"yes";
return 0;
}
