#include <bits/stdc++.h>
using namespace std;
bool a[1010];
int main()
{int i,j,m,s,n,k,f,x,y,l,flag=0;
/*m:数组1~m、s:起点、n:顺时针（右）数到第n个、k:逆时针(左)数到第k个 
f:目前a数组元素剩余的数量 
x:顺时针（右）计数器 
y:逆时针(左)计数器 
l:当前判断的数组元素 
flag:当前将数组元素出圈的次数 
*/
cin>>m>>s>>n>>k;
for(i=1;i<=m;i++)
a[i]=true;
f=m;
l=s-1;
while(f)
{
if(flag%2==0)
{x=n;
while(1)
{l++;
if(l>m)l=1;
if(a[l]==false)l++;
if(a[l]==true){
	x--;}
if(a[l]==true&&x==0){
	cout<<l<<" ";
	a[l]=false;
	f--;
	flag++;
	break;
}
}
}
else {
	y=k;
	while(1)
{l--;
if(l<1)l=m;
if(a[l]==false)l--;
if(a[l]==true){
	y--;}
if(a[l]==true&&y==0){
	cout<<l<<" ";
	a[l]=false;
	f--;
	flag++;
	break;
}
}
}
}
}
