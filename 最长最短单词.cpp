#include <bits/stdc++.h>
using namespace std;
int main()
{int len=0,symbol,min=100,max=0,i,start;
string s,smax,smin;
getline(cin,s);
for(i=0;i<s.size();i++)
{if(s[i]==' '||s[i]==','||i==s.size()-1)
{if(i==s.size()-1){len++;start=i+1-len;}
else start=i-len;
if(symbol==0)
{if(len<min){min=len;smin=s.substr(start,len);}
if(len>min){max=len;smin=s.substr(start,len);}
len=0;}
symbol++;}
else{len++;symbol=0;}}
cout<<smax<<endl;
cout<<smin<<endl;
return 0;}
