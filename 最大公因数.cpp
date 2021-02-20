#include <bits/stdc++.h>
using namespace std;
void gys(int,int);
int main()
{int a,b;
cin>>a>>b;
gys(a,b);
return 0;}
void gys(int x,int y)
{int r;
while(r=x%y)
{x=y;
y=r;}
cout<<y;}
