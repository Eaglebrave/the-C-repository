#include <bits/stdc++.h>
using namespace std;
char sa[101],sb[101];
int la,lb,lc,a[101],b[101],c[10200],i,j,jw,f,w;
int main()
{cin>>sa>>sb;
la=strlen(sa);
lb=strlen(sb);
memset(a,0,sizeof(a));memset(b,0,sizeof(b));
for(i=0;i<la;i++)
a[la-i-1]=sa[i]-'0';
for(i=0;i<lb;i++)
b[lb-i-1]=sb[i]-'0';
memset(c,0,sizeof(c));
for(i=0;i<la;i++)
for(j=0;j<lb;j++){
	f=a[i]*b[j];jw=f/10;f%=10;
	w=i+j;c[w]+=f;
	c[w+1]+=jw+c[w]/10;
	c[w]%=10;
}
lc=la+lb;
while(c[lc]==0)lc--;
if(lc<0)printf("0\n");
else for(i=lc;i>=0;i--)printf("%d",c[i]);
}
