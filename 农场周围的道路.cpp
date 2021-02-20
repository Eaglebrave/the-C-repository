#include <bits/stdc++.h>
using namespace std;
int k,s=0,x,y;//s为当前停下吃草的奶牛组数 
bool sl(int n)//将当前奶牛数量分为相差k的数，并将分出的数量给x,y赋值,当无法平分时返回false  （sl=数量） 
{x=(n-k)/2;
y=x+k;
if(x+y!=n)return false;
else return true;}
int fz(int n)//递归函数,n为当前分组奶牛数量 （fz=分组） 递归函数 
{if(n<=k+1){s++;
return 0;}
else if(sl(n)==false){s++;
return 0;}
else {sl(n);fz(x);
sl(n);fz(y);}
}
int main()
{int n;
cin>>n>>k;
fz(n);
cout<<s;}
