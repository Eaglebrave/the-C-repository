#include <bits/stdc++.h>
using namespace std;
int q[10010][2],a[110][110];
bool p[110];
int main(){
	int i,j,r,f,tmp,x,y,n;
	memset(p,true,sizeof(p));
	cin>>n>>x>>y;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	cin>>a[i][j];
	f=r=1;
	q[f][0]=x;q[f][1]=0;
	p[x]=false;
	while(f<=r){
		tmp=q[f][0];
		if(tmp==y){
			cout<<q[f][1]-1<<endl;
			return 0;
		}
		for(i=1;i<=n;i++)
		if(a[i][tmp]==1&&p[i]){
			r++;
			q[r][0]=i;
			q[r][1]=q[f][1]+1;
			p[i]=false;
		}
		f++;
	}
	return 0;
}
