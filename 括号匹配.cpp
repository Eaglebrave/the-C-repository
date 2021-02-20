#include <bits/stdc++.h>
using namespace std;
char s[301];
bool check(string str)
{bool flag=true;
char ch;
int top=0,i=0;
while(flag&&i<str.size())
{ch=str[i];
if(ch=='('||ch=='[')
{top++;
s[top]=ch;}
else {if(top==0)flag=false;
else{
	switch(s[top])
	{case'(':if(ch==')')top--;
	else flag=false;
	break;
	case'[':if(ch==']')top--;
	else flag=false;
	break;
	}
}
}
i++;
}
if(top>0)flag=false;
return flag;}
int main()
{string str;
getline(cin,str);
if(check(str))cout<<"ok"<<endl;
else cout<<"Wrong"<<endl;
return 0;}
