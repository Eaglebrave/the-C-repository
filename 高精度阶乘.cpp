#include <bits/stdc++.h>
using namespace std;
int n,h,a[10000];
int main()
{scanf("%d",&n);
memset(a,0,sizeof(a));
a[1]=1;
h=1;
for(int i=2;i<=n;i++)
{for(int j=1;j<=h;j++)
a[j]*=i;
for(int j=1;j<=h;j++){
	if(a[j]>=10){
		a[j+1]+=a[j]/10;
		a[j]%=10;
	}
}
while(a[h+1]>0)
{h++;
a[h+1]=a[h]/10;
a[h]%=10;
}
if(a[h+1]>0)h++;
}
for(int i=h;i>0;i--)printf("%d",a[i]);
return 0;
}
