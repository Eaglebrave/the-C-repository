#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s)//判断s是否是回文串
{int len=s.size();
for(int i=0;i<len/2;i++){
if(s[i]!=s[len-1-i])
return false;}
return true;}
int main()
{int i,j;
string s,sub;//sub就是取出来的子串 
cin>>s;
int len=s.size();
for (i=2;i<=len;i++){//按照长度递增枚举
for (j=0;j<=len-i;j++){
sub=s.substr(j,i);
if(palindrome(sub))
cout<<sub<<endl;}}
return 0;}
