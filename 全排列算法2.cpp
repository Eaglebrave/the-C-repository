#include<bits/stdc++.h>
using namespace std;
int n[5]={1,2,3,4,5},t;
void dfs(int begin,int end)
{if(begin==end)
{t++;}
else for(int i=begin;i<=end;i++)
{swap(n[begin],n[i]);
dfs(begin+1,end);
swap(n[begin],n[i]);
}}
int main()
{dfs(0,4);
cout<<t<<endl;
return 0;} 
