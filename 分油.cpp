#include <bits/stdc++.h>
using namespace std;
int q[1000][5],front,rear;
bool check(int x,int y,int z)
{bool flag=true;
for(int i=1;i<=rear;i++)
if(q[i][1]==x&&q[i][2]==y&&q[i][3]==z)flag=false;
return flag;
}
void add(int x,int y,int z)
{rear++;
q[rear][1]=x;
q[rear][2]=y;
q[rear][3]=z;
q[rear][4]=front;
}
void pr(int f)
{int ans[1000][5];
int r=0;
while(f!=0)
{r++;
ans[r][1]=q[f][1];
ans[r][2]=q[f][2];
ans[r][3]=q[f][3];
f=q[f][4];
}
for(int i=r;i>=1;i--)
printf("%d %d %d\n",ans[i][1],ans[i][2],ans[i][3]);
}
int main()
{q[1][1]=10;q[1][2]=0;q[1][3]=0;q[1][4]=0;
front=1,rear=1;
int x10,x7,x3;
while(front<=rear)
{if(q[front][1]==5&&q[front][2]==5){
	pr(front);
	exit(0);}
else{if(q[front][1]>0&&q[front][2]<7){
	x10=q[front][1]+q[front][2]-7;
	x7=7;
	x3=q[front][3];
	if(check(x10,x7,x3))add(x10,x7,x3);}
if(q[front][1]>0&&q[front][3]<3){
	x10=q[front][1]+q[front][3]-3;
	x3=3;
	x7=q[front][2];
	if(check(x10,x7,x3))add(x10,x7,x3);}
if(q[front][2]>0&&q[front][3]<3){
	x10=q[front][1]+q[front][3]-3;
	x3=3;
	x7=q[front][2];
	if(check(x10,x7,x3))add(x10,x7,x3);}
	if(q[front][2]>0&&q[front][3]<3)
	if(q[front][2]+q[front][3]>3)
	{x7=q[front][2]+q[front][3]-3;
	x3=3;}
	else{x3=q[front][2]+q[front][3];
	x7=0;
	}
	x10=q[front][1];
	if(check(x10,x7,x3))add(x10,x7,x3);
}
if(q[front][2]>0){
	x10=q[front][1]+q[front][2];
	x7=0;
	x3=q[front][3];
	if(check(x10,x7,x3))add(x10,x7,x3);
}
if(q[front][3]>0&&q[front][2]<7){
	if(q[front][3]>0&&q[front][2]<7){
		if(q[front][3]+q[front][2]>7)
		{x7=7;x7=q[front][3]+q[front][2]-7;}
		else{x3=0;x7=q[front][3]+q[front][2];}
		x10=q[front][1];
		if(check(x10,x7,x3))add(x10,x7,x3);}
		if(q[front][3]>0){
			x10=q[front][1]+q[front][3];
			x3=0;
			x7=q[front][2];
			if(check(x10,x7,x3))add(x10,x7,x3);
		}
	}
	front++;
}
return 0;
}
