#include <bits/stdc++.h>
using namespace std;
struct stu{
int a,b;
bool flag;	
}a[1000010];
int main()
{int m,n,x,y,i,j,s=0,min,minx;
cin>>m>>n;
for(i=1;i<=n;i++)
a[i].flag=true;
for(i=1;i<=n;i++)
cin>>a[i].a>>a[i].b;
while(m>0)
{min=1001;
for(i=1;i<=n;i++)
if(a[i].a<min&&a[i].flag==true){minx=i;min=a[i].a;}
if(m-a[minx].b>=0){
s+=a[minx].a*a[minx].b;
m-=a[minx].b;
a[minx].flag=false;}
else {
s+=((a[minx].b)-m)*a[minx].a;
m=0;
}
}
cout<<s;
}
