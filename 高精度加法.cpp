#include <bits/stdc++.h>
using namespace std;
char sa[1010],sb[1010];
int la,lb,lc,a[1010],b[1010],c[1010];
int main()
{scanf("%s",sa);
scanf("%s",sb);
la=strlen(sa);
lb=strlen(sb);
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
for(int i=0;i<la;i++)
a[la-i-1]=sa[i]-'0';
for(int i=0;i<lb;i++)
b[lb-i-1]=sb[i]-'0';
lc=la>lb?la:lb;
memset(c,0,sizeof(c));
for(int i=0;i<lc;i++)
{c[i]=a[i]+b[i]+c[i];
if(c[i]>=10){
	c[i+1]=1;
	c[i]-=10;
}
}
if(c[lc]>0)lc++;
for(int i=lc-1;i>=0;i--)
printf("%d",c[i]);
return 0;
}
