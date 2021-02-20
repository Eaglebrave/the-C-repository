#include <bits/stdc++.h>
using namespace std;
pair <int,int>coor[100001];
int dist(int a,int b)
{return abs(coor[a].first-coor[b].first)+abs(coor[a].second-coor[b].second);
}
int main()
{int n;
cin>>n;
for(int i=1;i<=n;i++)
scanf("%d%d",&coor[i].first,&coor[i].second);
int sum=0;
for(int i=2;i<=n;i++)sum+=dist(i,i-1);
int ans=sum;
for(int i=2;i<n;i++)
ans=min(ans,sum-dist(i,i-1)-dist(i+1,i)+dist(i-1,i+1));
printf("%d\n",ans);
return 0;}
