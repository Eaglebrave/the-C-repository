#include <bits/stdc++.h>
using namespace std;
int n,a[1000010];
long long m;
bool check(long long lim)
{long long res=0;
for(int i=1;i<=n;i++)
if(a[i]>lim)res+=(long long)a[i]-lim;
return (res>=m);}
int main()
{cin>>n>>m;
int max=-1;
for(int i=1;i<=n;i++)
{cin>>a[i];
if(a[i]>max)max=a[i];}
long long l=0,r=max,mid;
while(r>l)
{mid=l+r+1>>1;
if(check(mid))l=mid;
else r=mid-1;}
cout<<l<<endl;
return 0;
}
