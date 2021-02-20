#include <bits/stdc++.h>
using namespace std;
int cal1(int a,int b){return a+b;}
int cal2(int a,int b){return a-b;}
int cal3(int a,int b){return a*b;}
int cal4(int a,int b){return a/b;}
typedef int (*f)(int a,int b);
int main()
{int m,n,k;
f a[4]={cal1,cal2,cal3,cal4};
cin>>m>>n>>k;
cout<<a[k-1](m,n)<<endl;
return 0;
}
