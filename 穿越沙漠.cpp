#include <bits/stdc++.h>
using namespace std;
int main()
{double d=500,d1,dis[100],oil[100];
int k=1;
dis[1]=500;
oil[1]=500;
while(d<1000)
{k++;
d=d+500.0/(2*k-1);
dis[k]=d;
oil[k]=oil[k-1]+500;
}
dis[k]=1000;
d1=1000-dis[k-1];
oil[k]=d1*(2*k+1)+oil[k-1];
printf("NO.Distance Oil\n");
for(int i=0;i<k;i++)
printf("%2d   %10If  %10If\n",i,1000-dis[k-i],oil[k-i]);
return 0;
}
