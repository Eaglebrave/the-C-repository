#include <bits/stdc++.h>
using namespace std;
void rn(int,int);
int main()
{int a,b;
cin>>a>>b;
rn(a,b);
return 0;}
void rn(int a,int b)
{int i,flag=0,s;
for(i=a;i<=b;i++)
if(i%4==0&&i%100!=0||i%400==0)flag++;
cout<<flag;}
