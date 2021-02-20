#include <bits/stdc++.h>
using namespace std;
string com[13];
int t,score=0;
int f(char c)
{if(c=='/')return 10;
else return int(c)-int('0');}
int fs(int i)
{string st=com[i],st2=com[min(i+1,t)],st3=com[min(i+2,t)];
int ans;
if(st[0]!='/'&&st[1]!='/')ans=f(st[0])+f(st[1]);
else
{if(st[0]=='/'){
if(st2[0]=='/'&&st2.size()==1)ans=20+f(st3[0]);
else ans=10+min(10,f(st2[0])+f(st2[1]));}
else ans=10+f(st2[0]);}
return ans;}
int main()
{for(t=1;t<=10;t++)cin>>com[t];
if(com[10][0]=='/'){cin>>com[11];
t++;
if(com[11].size()==1){cin>>com[12];
t++;}}
else if(com[10].size()>1)
if(com[10][1]=='/')cin>>com[11];
for(int i=1;i<=10;i++)score+=fs(i);
cout<<score<<endl;
return 0;
}
