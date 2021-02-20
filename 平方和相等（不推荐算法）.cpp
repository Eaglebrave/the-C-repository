#include <bits/stdc++.h>
using namespace std;
int a=0,flag=0;
int main()
{int n,i,j,xs=-1,xflag=0,ys=0,x=0,x1,y1;/*使xs和ys不等,以进入循环 
x为当前判断的数 
a为初始数（第一个数） 
x1、y1分别表示前面的数的数量与后面的数的数量的数量 
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
