#include <bits/stdc++.h>
using namespace std;
int main()
{int i;
char a[100];
cin.getline(a,100);
for(i=0;i<strlen(a);i++)
{
if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'){
if(a[i]>='a'&&a[i]<='z')a[i]-=32;
}}
puts(a);
return 0;}
