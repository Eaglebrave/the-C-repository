#include <bits/stdc++.h>
using namespace std;
int main()
{char *p,*q;
char a[20],b[20];
cin>>a;
p=a;
q=b;
while(*p!='\0')
{*q=*p;
*p++;
*q++;}
*q='\0';
cout<<b;}
