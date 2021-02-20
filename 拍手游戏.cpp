#include <bits/stdc++.h>
using namespace std;
int main()
{int a=0,b=0,c=0,i=0,s=1;
bool flag;
while(a!=9||b!=9||c!=9)
{i++;
flag=false;
if(a<9){a++;
flag=true;}
if(b<9&&i%2==0){b++;
flag=true;}
if(c<9&&i%4==0){c++;
flag=true;}
if(flag==true)s++;}
cout<<s;}
