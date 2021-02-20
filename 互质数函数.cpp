#include <bits/stdc++.h>
using namespace std;
bool hzs(int x,int y)
{if(x==1&&y==1)return true;
else if(x<=0||y<=0||x==y)return false;
else if(x==1||y==1)return true;
else{int tmp=0;
while(true)
{tmp=x%y;
if(tmp==0)break;
else{x=y;
y=tmp;}}
if(y==1)
return true;
else return false;}}
