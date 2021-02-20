#include<bits/stdc++.h>
using namespace std;
int main() {
char a[80],ka,a1[80];
char b[80],kb,b1[80];
int i,j,x;
gets(a);
gets(b);
x=strlen(a)>strlen(b)?strlen(a):strlen(b);
ka=strlen(a);
kb=strlen(b);
for(i=0;i<x;i++){
if(a[i]>='a'&&a[i]<='z') a[i]-=32;
if(b[i]>='a'&&b[i]<='z') b[i]-=32;
}
for(i=0;i<strlen(a);i++)
{if(a[i]==' '){ka--;
	for(j=i;j<strlen(a);j++)
	{a[j]=a[j+1];
	}
}
}
for(i=0;i<strlen(b);i++)
{if(b[i]==' '){kb--;
	for(j=i;j<strlen(b);j++)
	{b[j]=b[j+1];
	}
}
}
for(i=0;i<ka;i++)
a1[i]=a[i];
for(i=0;i<kb;i++)
b1[i]=b[i];
if(strcmp(a1,b1)==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;}
