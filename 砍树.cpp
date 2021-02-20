#include <bits/stdc++.h>
using namespace std;
int n,a[1000010],m;
bool cmp(int x,int y)
{return x>y;
}
int main()
{cin>>n>>m;
for(int i=1;i<=n;i++)
cin>>a[i];
sort(a+1,a+n+1,cmp);
a[n+1]=0;
int sum=0,high=a[1];
for(int i=2;i<=n+1;i++)
{high=a[i];
sum+=(i-1)*(a[i-1]-high);
if(sum>=m){
	int y=sum-m;
	high+=y/(i-1);
	break;
}
}
cout<<high;
return 0;
}
