#include <bits/stdc++.h>
using namespace std;
int n,k=0;
int a[1000];
int count(int x)
{for(int i=1;i<=x;i++)
cout<<a[i]<<" ";
cout<<endl;}
void dfs(int x)
{for (int i=a[x-1]*a[x-1]+1;i<=n;i++)
{a[x]=i;
if(i==n){k++;
count(x);}
else dfs(x+1);}}
int main()
{a[0]=0;
cin>>n;
dfs(1);
cout<<"total:"<<k;}
