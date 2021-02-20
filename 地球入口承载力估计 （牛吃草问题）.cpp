#include <bits/stdc++.h>
using namespace std;
int main()
{double x,a,y,b;
cin>>x>>a>>y>>b; 
cout<<fixed<<setprecision(2)<<abs(x*a-y*b)*1.0/abs(a-b);}
/*
牛吃草问题
求草的生长速度=(对应的牛头数×吃的较多天数-对应的牛头数×吃的较少天数)÷(吃的较多天数-吃的较少天数);
*/
