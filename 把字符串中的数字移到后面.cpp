#include <bits/stdc++.h>
using namespace std;
void move(char &a,char &b)
{char temp;
temp=a;a=b;b=temp;}
char*fun(char*p)
{int i,j;
for(i=0;p[i];i++){
if(p[i]>'9'&&p[i]<'0')continue;
j=i;
while(p[j]>='0'&&p[j]<='9')j++;
if(!p[j])break;
while(p[j]&&j>i)
{move(p[j],p[j-1]);j--;}}return p;}
int main()
{char s[100];
cin.getline(s,100);
cout<<fun(s);
}
