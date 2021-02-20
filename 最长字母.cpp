#include <bits/stdc++.h>
using namespace std;
int top;
bool flag=false,s1=false;
char a[500],x[500],y[500],*p;
int main()
{cin.getline(a,500);
p=a;
while(*p!='\0')
{
while(*p==' ')
p++;
top=-1;
while(*p!=' '&&*p!='\0')
{top++;
if(s1==false)x[top]=*p;
else y[top]=*p;
p++;
}
if(strlen(y)>strlen(x))strcpy(x,y);
memset(y,0,sizeof(a));
if(s1==false)s1=true;
}
cout<<x;
}
