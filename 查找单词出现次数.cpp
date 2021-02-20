#include <bits/stdc++.h>
using namespace std;
char w[20],s[100];
int n1,n2;
int sub(int i)
{if(i>0&&s[i-1]!=' ')return 0;
if(i+n1<n2&&s[i+n1]!=' ')return 0;
for(int j=0;j<n1;j++)
if(w[j]!=s[i+j])return 0;
return 1;
}
char con(char s)
{if(s>='A'&&s<='Z')
s+=32;
return s;
}
int main()
{int t=0,k,i;
cin.getline(w,20);
cin.getline(s,100);
n1=strlen(w),n2=strlen(s);
for(i=0;i<n1;i++)
w[i]=con(w[i]);
for(i=0;i<n2;i++)
s[i]=con(s[i]);
for(i=0;i+n1<=n2;i++)
if(sub(i))
{t++;
if(t==1)k=i;}
if(t==0)cout<<-1;
else cout<<t<<" "<<k;
return 0;}
