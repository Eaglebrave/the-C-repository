#include <bits/stdc++.h>
using namespace std;
int a=0,flag=0;
int main()
{int n,i,j,xs=-1,xflag=0,ys=0,x=0,x1,y1;/*ʹxs��ys����,�Խ���ѭ�� 
xΪ��ǰ�жϵ��� 
aΪ��ʼ������һ������ 
x1��y1�ֱ��ʾǰ������������������������������� 
*/
cin>>n;
x1=(n+1)/2;
y1=(n-1)/2;
while(xs!=ys)
{a++;
xs=0;ys=0;
xflag++;
x=xflag;
flag=0;
while(1)
{
if(x-a<n){
flag++;
if(flag<=x1){
xs+=pow(x,2);
x++;}
else {ys+=pow(x,2);
x++;
}
}
else break;}
}
for(i=0;i<n;i++)
cout<<a+i<<" ";}
