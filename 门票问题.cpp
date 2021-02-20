#include<bits/stdc++.h>
using namespace std;
const int maxn=25000;
char a[101];
bool has[26];
int b[101],l,c,num,total;
void dfs(int x,int y,int n1,int n2,string s)
{if(y==l+1){total++;cout<<s<<endl;
if(total==maxn)exit(0);}
else {if(has[a[x]-97]){
if((l-y>=n2)&&(num-x-b[x+1]>=n2))
dfs(x+1,y+1,n1-1,n2,s+a[x]);}
else{ if((l-y>=n1)&&(b[x+1]>=n1))
dfs(x+1,y+1,n1,n2-1,s+a[x]);}
if((b[x+1]>=n1)&&(num-x>=l-y+1)&&(num-x-b[x+1]>=n2))
dfs(x+1,y,n1,n2,s);
}}
int main()
{cin>>l>>c;
has[0]=true;has[4]=true;has[8]=true;
has[14]=true;has[20]=true;
for(int i=1;i<=c;i++)
cin>>a[i];
for(int i=1;i<c;i++){
for(int j=i+1;j<=c;j++)
if(a[j]<a[i]){a[0]=a[i];a[i]=a[j];a[j]=a[0];}}
num=1;
for(int i=2;i<=c;i++)
if(a[i]!=a[i-1]){num++;a[num]=a[i];}
b[num+1]=0;
for(int i=num;i>=1;--i)
if(has[a[i]-97])b[i]=b[i+1]+1;
else b[i]=b[i+1];
total=0;
dfs(1,1,1,2," ");
return 0;}
