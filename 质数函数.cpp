#include <bits/stdc++.h>
using namespace std;
bool zs(int n)
{int i,s=0;
for(i=1;i<=n;i++)
if(n%i==0)s++;
if(s==2)return true;
else return false;}
