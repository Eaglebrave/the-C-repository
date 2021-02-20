#include <bits/stdc++.h>
using namespace std;
int k,x_p,y_p;
int prin(int a,int b,int a3,int b3)
{int ans=0;
if(a>a3)ans+=2;
if(b>b3)ans+=1;
return ans;
}
void make_s(int a1,int b1,int a2,int b2,int x,int y)
{if(a1+1==a2&&b1+1==b2)
{switch(x-a1+y-b1)
{case 0:printf("%d %d %d\n",a2,b2,3);return;
case 2:printf("%d %d %d\n",a1,b1,4);return;}
if(x==a1)printf("%d %d %d\n",a2,b1,1);
else printf("%d %d %d\n",a1,b2,2);
return ;}
int a3=(a1+a2)/2,b3=(b1+b2)/2;
switch (prin(x,y,a3,b3)){
	case 0:printf("%d %d %d\n",a3+1,b3+1,3);
	make_s(a1,b1,a3,b3,x,y);
	make_s(a1,b3+1,a3,b2,a3,b3+1);
	make_s(a3+1,b1,a2,b3,a3+1,b3);
	make_s(a3+1,b3+1,a2,b2,a3+1,b3+1);
	return ;
	case 1:printf("%d %d %d\n",a3+1,b3,1);
	make_s(a1,b1,a3,b3,a3,b3);
	make_s(a1,b3+1,a3,b2,x,y);
	make_s(a3+1,b1,a2,b3,a3+1,b3);
	make_s(a3+1,b3+1,a2,b2,a3+1,b3+1);
	return ;
	case 2:printf("%d %d %d\n",a3,b3+1,2);
	make_s(a1,b1,a3,b3,a3,b3);
	make_s(a1,b3+1,a3,b2,a3,b3+1);
	make_s(a3+1,b1,a2,b3,x,y);
	make_s(a3+1,b3+1,a2,b2,a3+1,b3+1);
	return ;
	case 3:printf("%d %d %d\n",a3,b3+1,4);
	make_s(a1,b1,a3,b3,a3,b3);
	make_s(a1,b3+1,a3,b2,a3,b3+1);
	make_s(a3+1,b1,a2,b3,a3+1,b3);
	make_s(a3+1,b3+1,a2,b2,x,y);
	return ;
}
}
int main()
{cin>>k>>x_p>>y_p;
k=(1<<k);
make_s(1,1,k,k,x_p,y_p);
}
