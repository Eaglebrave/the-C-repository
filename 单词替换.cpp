#include <bits/stdc++.h>
using namespace std;
int main()
{string s,a,b;
getline(cin,s);
getline(cin,a);
getline(cin,b);
int pos=0;
long index=s.find(a,pos++);
while(index!=-1){
if((index==0&&s[a.size()]==' ')||
(index==s.size()-a.size()&&s[index-1]==' ')||
(index>0&&s[index-1]==' '&&s[index+a.size()]==' '))
s.replace(index,a.size(),b);
index=s.find(a,pos++);}
cout<<s;}
