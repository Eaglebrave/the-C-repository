#include <bits/stdc++.h>
using namespace std;
bool a[1010];
int main()
{int i,j,m,s,n,k,f,x,y,l,flag=0;
/*m:����1~m��s:��㡢n:˳ʱ�루�ң�������n����k:��ʱ��(��)������k�� 
f:Ŀǰa����Ԫ��ʣ������� 
x:˳ʱ�루�ң������� 
y:��ʱ��(��)������ 
l:��ǰ�жϵ�����Ԫ�� 
flag:��ǰ������Ԫ�س�Ȧ�Ĵ��� 
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
