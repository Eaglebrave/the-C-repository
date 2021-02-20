#include <bits/stdc++.h>
using namespace std;
int main()
{int i,k;
char a[50],s;
gets(a);
////////////////////////////////////////////////
for(i=0;i<strlen(a);i++)
{if(a[i]>='a'&&a[i]<='z')a[i]-=32;
else a[i]+=32;
}
/////////////////////////////////////////////////
if(strlen(a)%2==0){k=strlen(a)/2;
for(i=0;i<=k-1;i++)
{s=a[i];
a[i]=a[strlen(a)-i-1];
a[strlen(a)-i-1]=s;}}
else {k=(strlen(a)-1)/2;
for(i=0;i<=k-1;i++)
{s=a[i];
a[i]=a[strlen(a)-i-1];
a[strlen(a)-i-1]=s;}}
/////////////////////////////////////////////////
for(i=0;i<strlen(a);i++)
{if(a[i]>='a'&&a[i]<='z'){
if(a[i]>='x'){
if(a[i]=='x')a[i]='a';
if(a[i]=='y')a[i]='b';
if(a[i]=='z')a[i]='c';}
else a[i]+=3;}
else {
if(a[i]>='X'){
if(a[i]=='X')a[i]='A';
if(a[i]=='Y')a[i]='B';
if(a[i]=='Z')a[i]='C';}
else a[i]+=3;}
}
puts(a);
return 0;}
