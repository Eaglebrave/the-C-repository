#include <bits/stdc++.h>
using namespace std;
int main()
{char s[100],w[20],x[20],*p=s;
int max=0,i,flag=0;
cin.getline(s,100);
while(*p)
{if(*p!=' '){
	if(flag==0)
	{flag=1;
	i=0;
	w[i++]=*p++;}
	else if(*(p+1)==0)
	{w[i++]=*p++;
	w[i]=0;
	if(i>max)strcpy(x,w);
	}
	else w[i++]=*p++;}
	else if(flag==1)
	{w[i]=0;
	if(i>max){max=i;
	strcpy(x,w);}
	flag=0;
	}
	else p++;
}
cout<<x<<endl;
}
