#include <bits/stdc++.h>
using namespace std;
int ys(int a,int b,int s)
{if(a%s==0&&b%s==0)return s;
else ys(a,b,s-1);}
int main()
{int a,b,max;
cin>>a>>b;
max=a>b?a:b;
cout<<ys(a,b,max)<<endl;
}
