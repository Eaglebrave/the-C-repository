#include <bits/stdc++.h>
using namespace std;
void move(char &a,char &b)
{char temp;
temp=a;a=b;b=temp;}
char *fun(char *p)
{for(char *p1=p;*p1;p1++){
	if(*p1>'9'&&*p1<'0')continue;
	char *p2=p1;
	while(*p2>='0'&&*p2<='9')
	p2++;
	if(!(*p2))break;
	while(*p2&&p2>p1){
		move (*p2,*(p2-1));
		p2--;
	}
}
return p;
}
int main()
{char a[100];
cin.getline(a,100);
cout<<fun(a);
}
