#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s)//�ж�s�Ƿ��ǻ��Ĵ�
{int len=s.size();
for(int i=0;i<len/2;i++){
if(s[i]!=s[len-1-i])
return false;}
return true;}
int main()
{int i,j;
string s,sub;//sub����ȡ�������Ӵ� 
cin>>s;
int len=s.size();
for (i=2;i<=len;i++){//���ճ��ȵ���ö��
for (j=0;j<=len-i;j++){
sub=s.substr(j,i);
if(palindrome(sub))
cout<<sub<<endl;}}
return 0;}
