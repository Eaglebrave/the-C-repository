#include <bits/stdc++.h>
using namespace std;
const int N=1010, INF=1<<30;
int h[N],f[N],d[N],n,ans1,ans2;
int main()
{cin>>n;
for(int i=1;i<=n;i++)cin>>h[i];
for(int i=1;i<=n;i++)
{for(int j=1;j<i;j++)
if(h[j]>h[i]) f[i]=max(f[i],f[j]);
f[i]++;}
for(int i=1;i<=n;i++) ans1=max(ans1,f[i]);
for(int i=1;i<=n;i++){
int wh=0,nowh= INF;
for(int j=1; j<=ans2;++j) 
if(d[j]>=h[i]&&d[j]<nowh) nowh=d[j], wh=j;
if(wh)d[wh]=h[i];
else d[++ans2]=h[i];}
cout<<ans1<<endl<<ans2<<endl;
return 0;}
