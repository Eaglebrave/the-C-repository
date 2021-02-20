#include <bits/stdc++.h>
using namespace std;
int main()
{string s;
int i=0,j,k;
getline(cin,s);
while(s[i]==' ')i++;
s=s.substr(i);
k=s.size();
s=' '+s;
for(i=k;i>=0;i--)
{if(s[i]==' '){
for(j=i+1;j<=k;j++)cout<<s[j];
if(i>1)cout<<" ";
k=i-1;}}
cout<<endl;
return 0;}
