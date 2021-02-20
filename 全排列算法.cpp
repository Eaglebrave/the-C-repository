#include <bits/stdc++.h>
using namespace std;
int v[100],n[5],t;
void dfs(int index)
{if(index==5)
{for(int i=0;i<5;i++)
cout<<n[i]<<" ";
cout<<endl; t++;
return;}
for(int i=1;i<=5;i++)
{if(!v[i])
{v[i]=1;
n[index]=i;
dfs(index+1);
v[i]=0;}}}
int main()
{dfs(0);
cout<<t<<endl;
return 0;}
