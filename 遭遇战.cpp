#include <bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
bool v1[1010][1010],v2[1010][1010];
void work()
{bool c1=true,c2=true;
int n,x1,y1,d1,x2,y2,d2;
cin>>n>>x1>>y1>>d1>>x2>>y2>>d2;
++x1,++y1,++x2,++y2;
memset(v1,true,sizeof(v1));
memset(v2,true,sizeof(v2));
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
v1[i][j]=v2[i][j]=false;
if(x1==x2&&y1==y2)
{cout<<x1-1<<" "<<y1-1<<endl;
return;}
v1[x1][y1]=v2[x2][y2]=true;
while(c1||c2){if(c1)
{int tx1=x1+dx[d1],ty1=y1+dy[d1];
if(v1[tx1][ty1]){
d1=(d1+1)&3;
tx1=x1+dx[d1];ty1=y1+dy[d1];
if(v1[tx1][ty1])c1=false;
else {x1=tx1;y1=ty1;}}
else {x1=tx1;y1=ty1;}}
if(c2){int tx2=x2+dx[d2],ty2=y2+dy[d2];
if(v2[tx2][ty2]){
d2=(d2+3)&3;
tx2=x2+dx[d2];ty2=y2+dy[d2];
if(v2[tx2][ty2])c2=false;
else{x2=tx2;y2=ty2;}}
else {x2=tx2;y2=ty2;}}
v1[x1][y1]=v2[x2][y2]=true;
if(x1==x2&&y1==y2){
cout<<x1-1<<" "<<y1-1<<endl;
if(x1==x2&&y1==y2){
cout<<x1-1<<" "<<y1-1<<endl;
return;}}}
cout<<"-1\n";
}
int main()
{int t;
cin>>t;
while(t--)work();
return 0;
}
